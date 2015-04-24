/**
 * @file
 *
 * @author jeff.daily@pnnl.gov
 *
 * Copyright (c) 2014 Battelle Memorial Institute.
 *
 * All rights reserved. No warranty, explicit or implicit, provided.
 *
 * This file was converted to C code from the raw file found at
 * ftp://ftp.cbi.pku.edu.cn/pub/software/blast/matrices/PAM150, the
 * Center for Bioinformatics, Peking University, China.
 */
#ifndef _PARASAIL_PAM150_H_
#define _PARASAIL_PAM150_H_

/* # */
/* # This matrix was produced by "pam" Version 1.0.6 [28-Jul-93] */
/* # */
/* # PAM 150 substitution matrix, scale = ln(2)/2 = 0.346574 */
/* # */
/* # Expected score = -1.25, Entropy = 0.754 bits */
/* # */
/* # Lowest score = -7, Highest score = 12 */
/* # */

static const int8_t parasail_pam150[] = {
/*        A   R   N   D   C   Q   E   G   H   I   L   K   M   F   P   S   T   W   Y   V   B   Z   X   * */
/* A */   3, -2,  0,  0, -2, -1,  0,  1, -2, -1, -2, -2, -1, -4,  1,  1,  1, -6, -3,  0,  0,  0, -1, -7,
/* R */  -2,  6, -1, -2, -4,  1, -2, -3,  1, -2, -3,  3, -1, -4, -1, -1, -2,  1, -4, -3, -2,  0, -1, -7,
/* N */   0, -1,  3,  2, -4,  0,  1,  0,  2, -2, -3,  1, -2, -4, -1,  1,  0, -4, -2, -2,  3,  1, -1, -7,
/* D */   0, -2,  2,  4, -6,  1,  3,  0,  0, -3, -5, -1, -3, -6, -2,  0, -1, -7, -4, -3,  3,  2, -1, -7,
/* C */  -2, -4, -4, -6,  9, -6, -6, -4, -3, -2, -6, -6, -5, -5, -3,  0, -3, -7,  0, -2, -5, -6, -3, -7,
/* Q */  -1,  1,  0,  1, -6,  5,  2, -2,  3, -3, -2,  0, -1, -5,  0, -1, -1, -5, -4, -2,  1,  4, -1, -7,
/* E */   0, -2,  1,  3, -6,  2,  4, -1,  0, -2, -4, -1, -2, -6, -1, -1, -1, -7, -4, -2,  2,  4, -1, -7,
/* G */   1, -3,  0,  0, -4, -2, -1,  4, -3, -3, -4, -2, -3, -5, -1,  1, -1, -7, -5, -2,  0, -1, -1, -7,
/* H */  -2,  1,  2,  0, -3,  3,  0, -3,  6, -3, -2, -1, -3, -2, -1, -1, -2, -3,  0, -3,  1,  1, -1, -7,
/* I */  -1, -2, -2, -3, -2, -3, -2, -3, -3,  5,  1, -2,  2,  0, -3, -2,  0, -5, -2,  3, -2, -2, -1, -7,
/* L */  -2, -3, -3, -5, -6, -2, -4, -4, -2,  1,  5, -3,  3,  1, -3, -3, -2, -2, -2,  1, -4, -3, -2, -7,
/* K */  -2,  3,  1, -1, -6,  0, -1, -2, -1, -2, -3,  4,  0, -6, -2, -1,  0, -4, -4, -3,  0,  0, -1, -7,
/* M */  -1, -1, -2, -3, -5, -1, -2, -3, -3,  2,  3,  0,  7, -1, -3, -2, -1, -5, -3,  1, -3, -2, -1, -7,
/* F */  -4, -4, -4, -6, -5, -5, -6, -5, -2,  0,  1, -6, -1,  7, -5, -3, -3, -1,  5, -2, -5, -5, -3, -7,
/* P */   1, -1, -1, -2, -3,  0, -1, -1, -1, -3, -3, -2, -3, -5,  6,  1,  0, -6, -5, -2, -2, -1, -1, -7,
/* S */   1, -1,  1,  0,  0, -1, -1,  1, -1, -2, -3, -1, -2, -3,  1,  2,  1, -2, -3, -1,  0, -1,  0, -7,
/* T */   1, -2,  0, -1, -3, -1, -1, -1, -2,  0, -2,  0, -1, -3,  0,  1,  4, -5, -3,  0,  0, -1, -1, -7,
/* W */  -6,  1, -4, -7, -7, -5, -7, -7, -3, -5, -2, -4, -5, -1, -6, -2, -5, 12, -1, -6, -5, -6, -4, -7,
/* Y */  -3, -4, -2, -4,  0, -4, -4, -5,  0, -2, -2, -4, -3,  5, -5, -3, -3, -1,  8, -3, -3, -4, -3, -7,
/* V */   0, -3, -2, -3, -2, -2, -2, -2, -3,  3,  1, -3,  1, -2, -2, -1,  0, -6, -3,  4, -2, -2, -1, -7,
/* B */   0, -2,  3,  3, -5,  1,  2,  0,  1, -2, -4,  0, -3, -5, -2,  0,  0, -5, -3, -2,  3,  2, -1, -7,
/* Z */   0,  0,  1,  2, -6,  4,  4, -1,  1, -2, -3,  0, -2, -5, -1, -1, -1, -6, -4, -2,  2,  4, -1, -7,
/* X */  -1, -1, -1, -1, -3, -1, -1, -1, -1, -1, -2, -1, -1, -3, -1,  0, -1, -4, -3, -1, -1, -1, -1, -7,
/* * */  -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7,  1
};

static const int parasail_pam150_[24][24] = {
/*        A   R   N   D   C   Q   E   G   H   I   L   K   M   F   P   S   T   W   Y   V   B   Z   X   * */
/* A */{  3, -2,  0,  0, -2, -1,  0,  1, -2, -1, -2, -2, -1, -4,  1,  1,  1, -6, -3,  0,  0,  0, -1, -7},
/* R */{ -2,  6, -1, -2, -4,  1, -2, -3,  1, -2, -3,  3, -1, -4, -1, -1, -2,  1, -4, -3, -2,  0, -1, -7},
/* N */{  0, -1,  3,  2, -4,  0,  1,  0,  2, -2, -3,  1, -2, -4, -1,  1,  0, -4, -2, -2,  3,  1, -1, -7},
/* D */{  0, -2,  2,  4, -6,  1,  3,  0,  0, -3, -5, -1, -3, -6, -2,  0, -1, -7, -4, -3,  3,  2, -1, -7},
/* C */{ -2, -4, -4, -6,  9, -6, -6, -4, -3, -2, -6, -6, -5, -5, -3,  0, -3, -7,  0, -2, -5, -6, -3, -7},
/* Q */{ -1,  1,  0,  1, -6,  5,  2, -2,  3, -3, -2,  0, -1, -5,  0, -1, -1, -5, -4, -2,  1,  4, -1, -7},
/* E */{  0, -2,  1,  3, -6,  2,  4, -1,  0, -2, -4, -1, -2, -6, -1, -1, -1, -7, -4, -2,  2,  4, -1, -7},
/* G */{  1, -3,  0,  0, -4, -2, -1,  4, -3, -3, -4, -2, -3, -5, -1,  1, -1, -7, -5, -2,  0, -1, -1, -7},
/* H */{ -2,  1,  2,  0, -3,  3,  0, -3,  6, -3, -2, -1, -3, -2, -1, -1, -2, -3,  0, -3,  1,  1, -1, -7},
/* I */{ -1, -2, -2, -3, -2, -3, -2, -3, -3,  5,  1, -2,  2,  0, -3, -2,  0, -5, -2,  3, -2, -2, -1, -7},
/* L */{ -2, -3, -3, -5, -6, -2, -4, -4, -2,  1,  5, -3,  3,  1, -3, -3, -2, -2, -2,  1, -4, -3, -2, -7},
/* K */{ -2,  3,  1, -1, -6,  0, -1, -2, -1, -2, -3,  4,  0, -6, -2, -1,  0, -4, -4, -3,  0,  0, -1, -7},
/* M */{ -1, -1, -2, -3, -5, -1, -2, -3, -3,  2,  3,  0,  7, -1, -3, -2, -1, -5, -3,  1, -3, -2, -1, -7},
/* F */{ -4, -4, -4, -6, -5, -5, -6, -5, -2,  0,  1, -6, -1,  7, -5, -3, -3, -1,  5, -2, -5, -5, -3, -7},
/* P */{  1, -1, -1, -2, -3,  0, -1, -1, -1, -3, -3, -2, -3, -5,  6,  1,  0, -6, -5, -2, -2, -1, -1, -7},
/* S */{  1, -1,  1,  0,  0, -1, -1,  1, -1, -2, -3, -1, -2, -3,  1,  2,  1, -2, -3, -1,  0, -1,  0, -7},
/* T */{  1, -2,  0, -1, -3, -1, -1, -1, -2,  0, -2,  0, -1, -3,  0,  1,  4, -5, -3,  0,  0, -1, -1, -7},
/* W */{ -6,  1, -4, -7, -7, -5, -7, -7, -3, -5, -2, -4, -5, -1, -6, -2, -5, 12, -1, -6, -5, -6, -4, -7},
/* Y */{ -3, -4, -2, -4,  0, -4, -4, -5,  0, -2, -2, -4, -3,  5, -5, -3, -3, -1,  8, -3, -3, -4, -3, -7},
/* V */{  0, -3, -2, -3, -2, -2, -2, -2, -3,  3,  1, -3,  1, -2, -2, -1,  0, -6, -3,  4, -2, -2, -1, -7},
/* B */{  0, -2,  3,  3, -5,  1,  2,  0,  1, -2, -4,  0, -3, -5, -2,  0,  0, -5, -3, -2,  3,  2, -1, -7},
/* Z */{  0,  0,  1,  2, -6,  4,  4, -1,  1, -2, -3,  0, -2, -5, -1, -1, -1, -6, -4, -2,  2,  4, -1, -7},
/* X */{ -1, -1, -1, -1, -3, -1, -1, -1, -1, -1, -2, -1, -1, -3, -1,  0, -1, -4, -3, -1, -1, -1, -1, -7},
/* * */{ -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7,  1}
};

#endif /* _PARASAIL_PAM150_H_ */
