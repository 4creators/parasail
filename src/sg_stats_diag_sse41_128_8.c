/**
 * @file
 *
 * @author jeff.daily@pnnl.gov
 *
 * Copyright (c) 2014 Battelle Memorial Institute.
 *
 * All rights reserved. No warranty, explicit or implicit, provided.
 */
#include "config.h"

#include <stdlib.h>

#include <emmintrin.h>
#include <smmintrin.h>

#include "parasail.h"
#include "parasail/memory.h"
#include "parasail/internal_sse.h"
#include "parasail/matrices/blosum_map.h"

#define NEG_INF INT8_MIN


/* shift given vector v, insert val, return shifted val */
static inline __m128i vshift(const __m128i v, const int val)
{
    __m128i ret = _mm_srli_si128(v, 1);
    ret = _mm_insert_epi8(ret, val, 15);
    return ret;
}

#ifdef PARASAIL_TABLE
static inline void arr_store_si128(
        int *array,
        __m128i vWscore,
        int32_t i,
        int32_t s1Len,
        int32_t j,
        int32_t s2Len)
{
    if (0 <= i+0 && i+0 < s1Len && 0 <= j-0 && j-0 < s2Len) {
        array[(i+0)*s2Len + (j-0)] = (int8_t)_mm_extract_epi8(vWscore, 15);
    }
    if (0 <= i+1 && i+1 < s1Len && 0 <= j-1 && j-1 < s2Len) {
        array[(i+1)*s2Len + (j-1)] = (int8_t)_mm_extract_epi8(vWscore, 14);
    }
    if (0 <= i+2 && i+2 < s1Len && 0 <= j-2 && j-2 < s2Len) {
        array[(i+2)*s2Len + (j-2)] = (int8_t)_mm_extract_epi8(vWscore, 13);
    }
    if (0 <= i+3 && i+3 < s1Len && 0 <= j-3 && j-3 < s2Len) {
        array[(i+3)*s2Len + (j-3)] = (int8_t)_mm_extract_epi8(vWscore, 12);
    }
    if (0 <= i+4 && i+4 < s1Len && 0 <= j-4 && j-4 < s2Len) {
        array[(i+4)*s2Len + (j-4)] = (int8_t)_mm_extract_epi8(vWscore, 11);
    }
    if (0 <= i+5 && i+5 < s1Len && 0 <= j-5 && j-5 < s2Len) {
        array[(i+5)*s2Len + (j-5)] = (int8_t)_mm_extract_epi8(vWscore, 10);
    }
    if (0 <= i+6 && i+6 < s1Len && 0 <= j-6 && j-6 < s2Len) {
        array[(i+6)*s2Len + (j-6)] = (int8_t)_mm_extract_epi8(vWscore, 9);
    }
    if (0 <= i+7 && i+7 < s1Len && 0 <= j-7 && j-7 < s2Len) {
        array[(i+7)*s2Len + (j-7)] = (int8_t)_mm_extract_epi8(vWscore, 8);
    }
    if (0 <= i+8 && i+8 < s1Len && 0 <= j-8 && j-8 < s2Len) {
        array[(i+8)*s2Len + (j-8)] = (int8_t)_mm_extract_epi8(vWscore, 7);
    }
    if (0 <= i+9 && i+9 < s1Len && 0 <= j-9 && j-9 < s2Len) {
        array[(i+9)*s2Len + (j-9)] = (int8_t)_mm_extract_epi8(vWscore, 6);
    }
    if (0 <= i+10 && i+10 < s1Len && 0 <= j-10 && j-10 < s2Len) {
        array[(i+10)*s2Len + (j-10)] = (int8_t)_mm_extract_epi8(vWscore, 5);
    }
    if (0 <= i+11 && i+11 < s1Len && 0 <= j-11 && j-11 < s2Len) {
        array[(i+11)*s2Len + (j-11)] = (int8_t)_mm_extract_epi8(vWscore, 4);
    }
    if (0 <= i+12 && i+12 < s1Len && 0 <= j-12 && j-12 < s2Len) {
        array[(i+12)*s2Len + (j-12)] = (int8_t)_mm_extract_epi8(vWscore, 3);
    }
    if (0 <= i+13 && i+13 < s1Len && 0 <= j-13 && j-13 < s2Len) {
        array[(i+13)*s2Len + (j-13)] = (int8_t)_mm_extract_epi8(vWscore, 2);
    }
    if (0 <= i+14 && i+14 < s1Len && 0 <= j-14 && j-14 < s2Len) {
        array[(i+14)*s2Len + (j-14)] = (int8_t)_mm_extract_epi8(vWscore, 1);
    }
    if (0 <= i+15 && i+15 < s1Len && 0 <= j-15 && j-15 < s2Len) {
        array[(i+15)*s2Len + (j-15)] = (int8_t)_mm_extract_epi8(vWscore, 0);
    }
}
#endif


#ifdef PARASAIL_TABLE
#define FNAME sg_stats_table_diag_sse41_128_8
#else
#define FNAME sg_stats_diag_sse41_128_8
#endif

parasail_result_t* FNAME(
        const char * const restrict _s1, const int s1Len,
        const char * const restrict _s2, const int s2Len,
        const int open, const int gap, const int matrix[24][24])
{
    const int32_t N = 16; /* number of values in vector */
    const int32_t PAD = N-1;
    const int32_t PAD2 = PAD*2;
    int8_t * const restrict s1      = parasail_memalign_int8_t(16, s1Len+PAD);
    int8_t * const restrict s2B     = parasail_memalign_int8_t(16, s2Len+PAD2);
    int8_t * const restrict _tbl_pr = parasail_memalign_int8_t(16, s2Len+PAD2);
    int8_t * const restrict _del_pr = parasail_memalign_int8_t(16, s2Len+PAD2);
    int8_t * const restrict _mch_pr = parasail_memalign_int8_t(16, s2Len+PAD2);
    int8_t * const restrict _sim_pr = parasail_memalign_int8_t(16, s2Len+PAD2);
    int8_t * const restrict _len_pr = parasail_memalign_int8_t(16, s2Len+PAD2);
    int8_t * const restrict s2 = s2B+PAD; /* will allow later for negative indices */
    int8_t * const restrict tbl_pr = _tbl_pr+PAD;
    int8_t * const restrict del_pr = _del_pr+PAD;
    int8_t * const restrict mch_pr = _mch_pr+PAD;
    int8_t * const restrict sim_pr = _sim_pr+PAD;
    int8_t * const restrict len_pr = _len_pr+PAD;
#ifdef PARASAIL_TABLE
    parasail_result_t *result = parasail_result_new_table3(s1Len, s2Len);
#else
    parasail_result_t *result = parasail_result_new();
#endif
    int32_t i = 0;
    int32_t j = 0;
    int8_t score = NEG_INF;
    int8_t matches = NEG_INF;
    int8_t similar = NEG_INF;
    int8_t length = NEG_INF;
    __m128i vNegLimit = _mm_set1_epi8(INT8_MIN);
    __m128i vPosLimit = _mm_set1_epi8(INT8_MAX);
    __m128i vSaturationCheckMin = vPosLimit;
    __m128i vSaturationCheckMax = vNegLimit;
    __m128i vNegInf = _mm_set1_epi8(NEG_INF);
    __m128i vNegInf0 = _mm_srli_si128(vNegInf, 1); /* shift in a 0 */
    __m128i vOpen = _mm_set1_epi8(open);
    __m128i vGap  = _mm_set1_epi8(gap);
    __m128i vZero = _mm_set1_epi8(0);
    __m128i vOne = _mm_set1_epi8(1);
    __m128i vN = _mm_set1_epi8(N);
    __m128i vNegOne = _mm_set1_epi8(-1);
    __m128i vI = _mm_set_epi8(0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15);
    __m128i vJreset = _mm_set_epi8(0,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,-14,-15);
    __m128i vMaxScore = vNegInf;
    __m128i vMaxMatch = vNegInf;
    __m128i vMaxSimilar = vNegInf;
    __m128i vMaxLength = vNegInf;
    __m128i vILimit = _mm_set1_epi8(s1Len);
    __m128i vILimit1 = _mm_subs_epi8(vILimit, vOne);
    __m128i vJLimit = _mm_set1_epi8(s2Len);
    __m128i vJLimit1 = _mm_subs_epi8(vJLimit, vOne);

    /* convert _s1 from char to int in range 0-23 */
    for (i=0; i<s1Len; ++i) {
        s1[i] = parasail_blosum_map[(unsigned char)_s1[i]];
    }
    /* pad back of s1 with dummy values */
    for (i=s1Len; i<s1Len+PAD; ++i) {
        s1[i] = 0; /* point to first matrix row because we don't care */
    }

    /* convert _s2 from char to int in range 0-23 */
    for (j=0; j<s2Len; ++j) {
        s2[j] = parasail_blosum_map[(unsigned char)_s2[j]];
    }
    /* pad front of s2 with dummy values */
    for (j=-PAD; j<0; ++j) {
        s2[j] = 0; /* point to first matrix row because we don't care */
    }
    /* pad back of s2 with dummy values */
    for (j=s2Len; j<s2Len+PAD; ++j) {
        s2[j] = 0; /* point to first matrix row because we don't care */
    }

    /* set initial values for stored row */
    for (j=0; j<s2Len; ++j) {
        tbl_pr[j] = 0;
        del_pr[j] = NEG_INF;
        mch_pr[j] = 0;
        sim_pr[j] = 0;
        len_pr[j] = 0;
    }
    /* pad front of stored row values */
    for (j=-PAD; j<0; ++j) {
        tbl_pr[j] = NEG_INF;
        del_pr[j] = NEG_INF;
        mch_pr[j] = 0;
        sim_pr[j] = 0;
        len_pr[j] = 0;
    }
    /* pad back of stored row values */
    for (j=s2Len; j<s2Len+PAD; ++j) {
        tbl_pr[j] = NEG_INF;
        del_pr[j] = NEG_INF;
        mch_pr[j] = 0;
        sim_pr[j] = 0;
        len_pr[j] = 0;
    }
    tbl_pr[-1] = 0; /* upper left corner */

    /* iterate over query sequence */
    for (i=0; i<s1Len; i+=N) {
        __m128i vNscore = vNegInf0;
        __m128i vNmatch = vZero;
        __m128i vNsimilar = vZero;
        __m128i vNlength = vZero;
        __m128i vWscore = vNegInf0;
        __m128i vWmatch = vZero;
        __m128i vWsimilar = vZero;
        __m128i vWlength = vZero;
        __m128i vIns = vNegInf;
        __m128i vDel = vNegInf;
        __m128i vJ = vJreset;
        __m128i vs1 = _mm_set_epi8(
                s1[i+0],
                s1[i+1],
                s1[i+2],
                s1[i+3],
                s1[i+4],
                s1[i+5],
                s1[i+6],
                s1[i+7],
                s1[i+8],
                s1[i+9],
                s1[i+10],
                s1[i+11],
                s1[i+12],
                s1[i+13],
                s1[i+14],
                s1[i+15]);
        __m128i vs2 = vNegInf;
        const int * const restrict matrow0 = matrix[s1[i+0]];
        const int * const restrict matrow1 = matrix[s1[i+1]];
        const int * const restrict matrow2 = matrix[s1[i+2]];
        const int * const restrict matrow3 = matrix[s1[i+3]];
        const int * const restrict matrow4 = matrix[s1[i+4]];
        const int * const restrict matrow5 = matrix[s1[i+5]];
        const int * const restrict matrow6 = matrix[s1[i+6]];
        const int * const restrict matrow7 = matrix[s1[i+7]];
        const int * const restrict matrow8 = matrix[s1[i+8]];
        const int * const restrict matrow9 = matrix[s1[i+9]];
        const int * const restrict matrow10 = matrix[s1[i+10]];
        const int * const restrict matrow11 = matrix[s1[i+11]];
        const int * const restrict matrow12 = matrix[s1[i+12]];
        const int * const restrict matrow13 = matrix[s1[i+13]];
        const int * const restrict matrow14 = matrix[s1[i+14]];
        const int * const restrict matrow15 = matrix[s1[i+15]];
        __m128i vIltLimit = _mm_cmplt_epi8(vI, vILimit);
        __m128i vIeqLimit1 = _mm_cmpeq_epi8(vI, vILimit1);
        /* iterate over database sequence */
        for (j=0; j<s2Len+PAD; ++j) {
            __m128i vMat;
            __m128i vNWscore = vNscore;
            __m128i vNWmatch = vNmatch;
            __m128i vNWsimilar = vNsimilar;
            __m128i vNWlength = vNlength;
            vNscore = vshift(vWscore, tbl_pr[j]);
            vNmatch = vshift(vWmatch, mch_pr[j]);
            vNsimilar = vshift(vWsimilar, sim_pr[j]);
            vNlength = vshift(vWlength, len_pr[j]);
            vDel = vshift(vDel, del_pr[j]);
            vDel = _mm_max_epi8(
                    _mm_subs_epi8(vNscore, vOpen),
                    _mm_subs_epi8(vDel, vGap));
            vIns = _mm_max_epi8(
                    _mm_subs_epi8(vWscore, vOpen),
                    _mm_subs_epi8(vIns, vGap));
            vs2 = vshift(vs2, s2[j]);
            vMat = _mm_set_epi8(
                    matrow0[s2[j-0]],
                    matrow1[s2[j-1]],
                    matrow2[s2[j-2]],
                    matrow3[s2[j-3]],
                    matrow4[s2[j-4]],
                    matrow5[s2[j-5]],
                    matrow6[s2[j-6]],
                    matrow7[s2[j-7]],
                    matrow8[s2[j-8]],
                    matrow9[s2[j-9]],
                    matrow10[s2[j-10]],
                    matrow11[s2[j-11]],
                    matrow12[s2[j-12]],
                    matrow13[s2[j-13]],
                    matrow14[s2[j-14]],
                    matrow15[s2[j-15]]
                    );
            vNWscore = _mm_adds_epi8(vNWscore, vMat);
            vWscore = _mm_max_epi8(vNWscore, vIns);
            vWscore = _mm_max_epi8(vWscore, vDel);
            /* conditional block */
            {
                __m128i case1not;
                __m128i case2not;
                __m128i case2;
                __m128i case3;
                __m128i vCmatch;
                __m128i vCsimilar;
                __m128i vClength;
                case1not = _mm_or_si128(
                        _mm_cmplt_epi8(vNWscore,vDel),
                        _mm_cmplt_epi8(vNWscore,vIns));
                case2not = _mm_cmplt_epi8(vDel,vIns);
                case2 = _mm_andnot_si128(case2not,case1not);
                case3 = _mm_and_si128(case1not,case2not);
                vCmatch = _mm_andnot_si128(case1not,
                        _mm_adds_epi8(vNWmatch, _mm_and_si128(
                                _mm_cmpeq_epi8(vs1,vs2),vOne)));
                vCmatch = _mm_or_si128(vCmatch, _mm_and_si128(case2, vNmatch));
                vCmatch = _mm_or_si128(vCmatch, _mm_and_si128(case3, vWmatch));
                vCsimilar = _mm_andnot_si128(case1not,
                        _mm_adds_epi8(vNWsimilar, _mm_and_si128(
                                _mm_cmpgt_epi8(vMat,vZero),vOne)));
                vCsimilar = _mm_or_si128(vCsimilar, _mm_and_si128(case2, vNsimilar));
                vCsimilar = _mm_or_si128(vCsimilar, _mm_and_si128(case3, vWsimilar));
                vClength= _mm_andnot_si128(case1not,
                        _mm_adds_epi8(vNWlength, vOne));
                vClength= _mm_or_si128(vClength,_mm_and_si128(case2,
                            _mm_adds_epi8(vNlength, vOne)));
                vClength= _mm_or_si128(vClength,_mm_and_si128(case3,
                            _mm_adds_epi8(vWlength, vOne)));
                vWmatch = vCmatch;
                vWsimilar = vCsimilar;
                vWlength = vClength;
            }

            /* as minor diagonal vector passes across the j=-1 boundary,
             * assign the appropriate boundary conditions */
            {
                __m128i cond = _mm_cmpeq_epi8(vJ,vNegOne);
                vWscore = _mm_andnot_si128(cond, vWscore);
                vWmatch = _mm_andnot_si128(cond, vWmatch);
                vWsimilar = _mm_andnot_si128(cond, vWsimilar);
                vWlength = _mm_andnot_si128(cond, vWlength);
                vDel = _mm_blendv_epi8(vDel, vNegInf, cond);
                vIns = _mm_blendv_epi8(vIns, vNegInf, cond);
            }
            /* check for saturation */
            {
                vSaturationCheckMax = _mm_max_epi8(vSaturationCheckMax, vWscore);
                vSaturationCheckMin = _mm_min_epi8(vSaturationCheckMin, vWscore);
                vSaturationCheckMax = _mm_max_epi8(vSaturationCheckMax, vWmatch);
                vSaturationCheckMax = _mm_max_epi8(vSaturationCheckMax, vWsimilar);
                vSaturationCheckMax = _mm_max_epi8(vSaturationCheckMax, vWlength);
            }
#ifdef PARASAIL_TABLE
            arr_store_si128(result->score_table, vWscore, i, s1Len, j, s2Len);
            arr_store_si128(result->matches_table, vWmatch, i, s1Len, j, s2Len);
            arr_store_si128(result->similar_table, vWsimilar, i, s1Len, j, s2Len);
            arr_store_si128(result->length_table, vWlength, i, s1Len, j, s2Len);
#endif
            tbl_pr[j-15] = (int8_t)_mm_extract_epi8(vWscore,0);
            mch_pr[j-15] = (int8_t)_mm_extract_epi8(vWmatch,0);
            sim_pr[j-15] = (int8_t)_mm_extract_epi8(vWsimilar,0);
            len_pr[j-15] = (int8_t)_mm_extract_epi8(vWlength,0);
            del_pr[j-15] = (int8_t)_mm_extract_epi8(vDel,0);
            /* as minor diagonal vector passes across the i or j limit
             * boundary, extract the last value of the column or row */
            {
                __m128i vJeqLimit1 = _mm_cmpeq_epi8(vJ, vJLimit1);
                __m128i vJgtNegOne = _mm_cmpgt_epi8(vJ, vNegOne);
                __m128i vJltLimit = _mm_cmplt_epi8(vJ, vJLimit);
                __m128i cond_j = _mm_and_si128(vIltLimit, vJeqLimit1);
                __m128i cond_i = _mm_and_si128(vIeqLimit1,
                        _mm_and_si128(vJgtNegOne, vJltLimit));
                __m128i cond_max = _mm_cmpgt_epi8(vWscore, vMaxScore);
                __m128i cond_all = _mm_and_si128(cond_max,
                        _mm_or_si128(cond_i, cond_j));
                vMaxScore = _mm_blendv_epi8(vMaxScore, vWscore, cond_all);
                vMaxMatch = _mm_blendv_epi8(vMaxMatch, vWmatch, cond_all);
                vMaxSimilar = _mm_blendv_epi8(vMaxSimilar, vWsimilar, cond_all);
                vMaxLength = _mm_blendv_epi8(vMaxLength, vWlength, cond_all);
            }
            vJ = _mm_adds_epi8(vJ, vOne);
        }
        vI = _mm_adds_epi8(vI, vN);
    }

    /* max in vMaxScore */
    for (i=0; i<N; ++i) {
        int8_t value;
        value = (int8_t) _mm_extract_epi8(vMaxScore, 15);
        if (value > score) {
            score = value;
            matches = (int8_t) _mm_extract_epi8(vMaxMatch, 15);
            similar = (int8_t) _mm_extract_epi8(vMaxSimilar, 15);
            length= (int8_t) _mm_extract_epi8(vMaxLength, 15);
        }
        vMaxScore = _mm_slli_si128(vMaxScore, 1);
        vMaxMatch = _mm_slli_si128(vMaxMatch, 1);
        vMaxSimilar = _mm_slli_si128(vMaxSimilar, 1);
        vMaxLength = _mm_slli_si128(vMaxLength, 1);
    }

    if (_mm_movemask_epi8(_mm_or_si128(
            _mm_cmpeq_epi8(vSaturationCheckMin, vNegLimit),
            _mm_cmpeq_epi8(vSaturationCheckMax, vPosLimit)))) {
        result->saturated = 1;
        score = INT8_MAX;
        matches = 0;
        similar = 0;
        length = 0;
    }

    result->score = score;
    result->matches = matches;
    result->similar = similar;
    result->length = length;

    parasail_free(_len_pr);
    parasail_free(_sim_pr);
    parasail_free(_mch_pr);
    parasail_free(_del_pr);
    parasail_free(_tbl_pr);
    parasail_free(s2B);
    parasail_free(s1);

    return result;
}


