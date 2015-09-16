/**
 * @file
 *
 * @author jeff.daily@pnnl.gov
 *
 * Copyright (c) 2015 Battelle Memorial Institute.
 *
 * This file was converted to C code from the raw file found at
 * ftp://ftp.cbi.pku.edu.cn/pub/software/blast/matrices/BLOSUM55, the
 * Center for Bioinformatics, Peking University, China.
 */
#ifndef _PARASAIL_BLOSUM55_H_
#define _PARASAIL_BLOSUM55_H_

#include "parasail.h"
#include "blosum_map.h"

#ifdef __cplusplus
extern "C" {
#endif

/* #  Matrix made by matblas from blosum55.iij */
/* #  * column uses minimum score */
/* #  BLOSUM Clustered Scoring Matrix in 1/3 Bit Units */
/* #  Blocks Database = /data/blocks_5.0/blocks.dat */
/* #  Cluster Percentage: >= 55 */
/* #  Entropy =   0.5637, Expected =  -0.4179 */

static const int parasail_blosum55_[] = {
/*        A   R   N   D   C   Q   E   G   H   I   L   K   M   F   P   S   T   W   Y   V   B   Z   X   * */
/* A */   5, -2, -2, -2,  0, -1, -1,  0, -2, -2, -2, -1, -1, -3, -1,  2,  0, -4, -2,  0, -2, -1, -1, -5,
/* R */  -2,  8, -1, -2, -4,  1,  0, -3,  0, -4, -3,  3, -2, -3, -3, -1, -1, -3, -2, -3, -1,  0, -1, -5,
/* N */  -2, -1,  8,  2, -3,  0,  0,  0,  1, -4, -4,  0, -3, -4, -2,  1,  0, -5, -2, -4,  4,  0, -1, -5,
/* D */  -2, -2,  2,  8, -4,  0,  2, -2, -1, -4, -5, -1, -4, -5, -2,  0, -1, -5, -3, -4,  5,  1, -2, -5,
/* C */   0, -4, -3, -4, 13, -4, -4, -3, -4, -2, -2, -4, -2, -3, -3, -1, -1, -4, -3, -1, -4, -4, -2, -5,
/* Q */  -1,  1,  0,  0, -4,  7,  2, -2,  1, -4, -3,  2,  0, -4, -1,  0, -1, -2, -1, -3,  0,  4, -1, -5,
/* E */  -1,  0,  0,  2, -4,  2,  7, -3, -1, -4, -4,  1, -3, -4, -1,  0, -1, -3, -2, -3,  1,  5, -1, -5,
/* G */   0, -3,  0, -2, -3, -2, -3,  8, -2, -5, -5, -2, -3, -4, -3,  0, -2, -3, -4, -4, -1, -3, -2, -5,
/* H */  -2,  0,  1, -1, -4,  1, -1, -2, 11, -4, -3,  0, -2, -1, -3, -1, -2, -3,  2, -4,  0,  0, -1, -5,
/* I */  -2, -4, -4, -4, -2, -4, -4, -5, -4,  6,  2, -4,  2,  0, -3, -3, -1, -3, -1,  4, -4, -4, -1, -5,
/* L */  -2, -3, -4, -5, -2, -3, -4, -5, -3,  2,  6, -3,  3,  1, -4, -3, -2, -3, -1,  1, -4, -3, -1, -5,
/* K */  -1,  3,  0, -1, -4,  2,  1, -2,  0, -4, -3,  6, -2, -4, -1,  0, -1, -4, -2, -3,  0,  1, -1, -5,
/* M */  -1, -2, -3, -4, -2,  0, -3, -3, -2,  2,  3, -2,  8,  0, -3, -2, -1, -2, -1,  1, -3, -2, -1, -5,
/* F */  -3, -3, -4, -5, -3, -4, -4, -4, -1,  0,  1, -4,  0,  9, -5, -3, -3,  2,  4, -1, -5, -4, -2, -5,
/* P */  -1, -3, -2, -2, -3, -1, -1, -3, -3, -3, -4, -1, -3, -5, 10, -1, -1, -5, -4, -3, -2, -1, -2, -5,
/* S */   2, -1,  1,  0, -1,  0,  0,  0, -1, -3, -3,  0, -2, -3, -1,  5,  2, -4, -2, -2,  0,  0, -1, -5,
/* T */   0, -1,  0, -1, -1, -1, -1, -2, -2, -1, -2, -1, -1, -3, -1,  2,  6, -3, -2,  0, -1, -1, -1, -5,
/* W */  -4, -3, -5, -5, -4, -2, -3, -3, -3, -3, -3, -4, -2,  2, -5, -4, -3, 15,  3, -4, -5, -3, -3, -5,
/* Y */  -2, -2, -2, -3, -3, -1, -2, -4,  2, -1, -1, -2, -1,  4, -4, -2, -2,  3,  9, -2, -3, -2, -1, -5,
/* V */   0, -3, -4, -4, -1, -3, -3, -4, -4,  4,  1, -3,  1, -1, -3, -2,  0, -4, -2,  5, -4, -3, -1, -5,
/* B */  -2, -1,  4,  5, -4,  0,  1, -1,  0, -4, -4,  0, -3, -5, -2,  0, -1, -5, -3, -4,  5,  2, -1, -5,
/* Z */  -1,  0,  0,  1, -4,  4,  5, -3,  0, -4, -3,  1, -2, -4, -1,  0, -1, -3, -2, -3,  2,  5, -1, -5,
/* X */  -1, -1, -1, -2, -2, -1, -1, -2, -1, -1, -1, -1, -1, -2, -2, -1, -1, -3, -1, -1, -1, -1, -1, -5,
/* * */  -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5,  1
};

static const parasail_matrix_t parasail_blosum55 = {
    "blosum55",
    parasail_blosum55_,
    parasail_blosum_map,
    24,
    15,
    -5,
    0
};

#ifdef __cplusplus
}
#endif

#endif /* _PARASAIL_BLOSUM55_H_ */

