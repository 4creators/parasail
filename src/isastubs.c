/**
 * @file
 *
 * @author jeff.daily@pnnl.gov
 *
 * Copyright (c) 2015 Battelle Memorial Institute.
 *
 * These functions borrow heavily, if not verbatim, from the files in
 * the parsail contrib directory. Please see contrib for details and
 * copyrights of the respective authors/sources.
 */
#include "config.h"

#include "parasail.h"

#include <errno.h>
#include <stdlib.h>

#define UNUSED(expr) do { (void)(expr); } while (0)

extern
parasail_result_t* parasail_isastub_dummy() {
    errno = ENOSYS;
    return NULL;
}


#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_sse2_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_sse2_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_sse2_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_sse2_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_sse2_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_sse41_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_sse41_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_sse41_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_avx2_256_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_avx2_256_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_avx2_256_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_avx2_256_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_avx2_256_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_diag_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_table_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_rowcol_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_trace_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_table_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_nw_stats_rowcol_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_table_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_rowcol_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_trace_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_table_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sg_stats_rowcol_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_table_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_rowcol_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_trace_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_table_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_scan_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_sse2_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_sse2_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_sse2_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_sse2_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_sse2_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_sse41_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_sse41_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_sse41_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_sse41_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_sse41_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_avx2_256_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_avx2_256_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_avx2_256_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_avx2_256_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_avx2_256_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_altivec_128_64(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_altivec_128_32(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_altivec_128_16(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_altivec_128_8(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_result_t* parasail_sw_stats_rowcol_striped_profile_altivec_128_sat(
        const parasail_profile_t * const restrict profile,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap)
{
    UNUSED(profile);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_blocked_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_blocked_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_blocked_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_table_blocked_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_blocked_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_rowcol_blocked_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_blocked_sse41_128_32(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE41
#else
extern
parasail_result_t* parasail_sw_trace_blocked_sse41_128_16(
        const char * const restrict s1, const int s1Len,
        const char * const restrict s2, const int s2Len,
        const int open, const int gap,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(s2);
    UNUSED(s2Len);
    UNUSED(open);
    UNUSED(gap);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2 || HAVE_SSE41
#else
extern
parasail_profile_t* parasail_profile_create_sse_128_64(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2 || HAVE_SSE41
#else
extern
parasail_profile_t* parasail_profile_create_sse_128_32(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2 || HAVE_SSE41
#else
extern
parasail_profile_t* parasail_profile_create_sse_128_16(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2 || HAVE_SSE41
#else
extern
parasail_profile_t* parasail_profile_create_sse_128_8(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2 || HAVE_SSE41
#else
extern
parasail_profile_t* parasail_profile_create_sse_128_sat(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_profile_t* parasail_profile_create_avx_256_64(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_profile_t* parasail_profile_create_avx_256_32(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_profile_t* parasail_profile_create_avx_256_16(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_profile_t* parasail_profile_create_avx_256_8(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_profile_t* parasail_profile_create_avx_256_sat(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_profile_t* parasail_profile_create_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_profile_t* parasail_profile_create_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_profile_t* parasail_profile_create_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_profile_t* parasail_profile_create_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_profile_t* parasail_profile_create_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2 || HAVE_SSE41
#else
extern
parasail_profile_t* parasail_profile_create_stats_sse_128_64(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2 || HAVE_SSE41
#else
extern
parasail_profile_t* parasail_profile_create_stats_sse_128_32(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2 || HAVE_SSE41
#else
extern
parasail_profile_t* parasail_profile_create_stats_sse_128_16(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2 || HAVE_SSE41
#else
extern
parasail_profile_t* parasail_profile_create_stats_sse_128_8(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_SSE2 || HAVE_SSE41
#else
extern
parasail_profile_t* parasail_profile_create_stats_sse_128_sat(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_profile_t* parasail_profile_create_stats_avx_256_64(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_profile_t* parasail_profile_create_stats_avx_256_32(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_profile_t* parasail_profile_create_stats_avx_256_16(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_profile_t* parasail_profile_create_stats_avx_256_8(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_AVX2
#else
extern
parasail_profile_t* parasail_profile_create_stats_avx_256_sat(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_profile_t* parasail_profile_create_stats_altivec_128_64(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_profile_t* parasail_profile_create_stats_altivec_128_32(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_profile_t* parasail_profile_create_stats_altivec_128_16(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_profile_t* parasail_profile_create_stats_altivec_128_8(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

#if HAVE_ALTIVEC
#else
extern
parasail_profile_t* parasail_profile_create_stats_altivec_128_sat(
        const char * const restrict s1, const int s1Len,
        const parasail_matrix_t* matrix)
{
    UNUSED(s1);
    UNUSED(s1Len);
    UNUSED(matrix);
    errno = ENOSYS;
    return NULL;
}
#endif

