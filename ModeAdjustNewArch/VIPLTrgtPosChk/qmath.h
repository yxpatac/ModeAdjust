
#ifndef QMATH_H_
#define QMATH_H_

#include "math.h"

#define QSIN
#define QCOS
#define QACOS
#define QSQRT

#define PI	((float)3.14159265354)
#define Q0	0
#define Q1	(PI/2)
#define Q2	PI
#define Q3	(PI*3/2)
#define Q4	(PI*2)
#define DUALPI	Q4
#define QPSIN	(2048/PI)
#define QPACOS	1024

typedef unsigned char qm_bool;

#ifndef TRUE
#define TRUE 1U
#endif
#ifndef FALSE
#define FALSE 0U
#endif

typedef struct _ptTyp {
	float x;
	float y;
	float z;
} ptTyp;

extern const ptTyp PTZERO;

#ifdef QSIN
float qsin(float x);
#else
# define qsin(x)	sin(x)
#endif

#ifdef QCOS
float qcos(float x);
#else
# define qcos(x) cos(x)
#endif

#ifdef QACOS
float qacos(float x);
#else
# define qacos(x) (x>=1?0:(x<=-1?PI:acos(x)))
#endif

#ifdef QSQRT
float qinvsqrt(float x);
float qsqrt(float x);
#else
# define qsqrt(x) sqrt(x)
#endif

#define qmin(x,y) ((x)<(y)?(x):(y))
float qsat(float x, float min, float max);

ptTyp ptSetY(ptTyp p);
ptTyp ptAddY(ptTyp A, ptTyp B);
ptTyp ptMinusY(ptTyp A, ptTyp B);
ptTyp ptMulY(ptTyp A, float scale);
ptTyp ptSolveLinkMidY(ptTyp A,ptTyp B,float MA,float MB);
float ptDistY(ptTyp a,ptTyp b);
ptTyp ptRotY(ptTyp p, float r);
ptTyp ptUnitY(ptTyp A,ptTyp B);
float ptAbsY(ptTyp A);
float ptAngleIncY(ptTyp A,ptTyp B);
qm_bool ptPedalInSegY(ptTyp D,ptTyp A,ptTyp B);
float ptDist2SegY(ptTyp D,ptTyp A,ptTyp B, qm_bool ext);

#endif /* QMATH_H_ */
