
#ifndef QMATH_H_
#define QMATH_H_

#include "math.h"

#define QSIN
#define QCOS
#define QACOS
#define QSQRT
//#define QEXP	//do NOT uncomment, the resolution seems not enough for NN usage

typedef unsigned char qm_bool;
typedef unsigned char qm_u8;
typedef signed char qm_s8;
typedef unsigned short qm_u16;
typedef float qm_float;
typedef int qm_int;
typedef double qm_double;

#define PI	((qm_float)3.14159265354F)
#define Q0	0.0F
#define Q1	(PI/2.0F)
#define Q2	PI
#define Q3	((PI*3.0F)/2.0F)
#define Q4	(PI*2.0F)
#define DUALPI	Q4
#define QPSIN	(2048.0F/PI)
#define QPACOS	1024.0F

#ifndef TRUE
#define TRUE 1U
#endif
#ifndef FALSE
#define FALSE 0U
#endif

typedef struct {///_ptTyp {
	qm_float x;
	qm_float y;
	qm_float z;
} ptTyp;

extern const ptTyp PTZERO;

#ifdef QSIN
extern qm_float qsin(qm_float x);
#else
# define qsin(x)	sin(x)
#endif

#ifdef QCOS
extern qm_float qcos(qm_float x);
#else
# define qcos(x) cos(x)
#endif

#ifdef QACOS
extern qm_float qacos(qm_float x);
#else
# define qacos(x) (x>=1?0:(x<=-1?PI:acos(x)))
#endif

#ifdef QSQRT
extern qm_float qinvsqrt(qm_float x);
extern qm_float qsqrt(qm_float x);
extern qm_double qinvsqrtd(qm_double x);
#else
# define qsqrt(x) sqrt(x)
#endif

#ifdef QEXP
extern qm_float qexp(qm_float x);
#else
#define qexp(x) expf(x)
#endif

#define qmin(x,y) (((x)<(y))?(x):(y))
extern qm_float qsat(qm_float x, qm_float min, qm_float max);
#define qabs(x,y) (((x)>(y))?((x)-(y)):((y)-(x)))

extern ptTyp ptSetY(ptTyp p);
extern ptTyp ptAddY(ptTyp A, ptTyp B);
extern ptTyp ptMinusY(ptTyp A, ptTyp B);
extern ptTyp ptMulY(ptTyp A, qm_float scale);
//be careful, ptSolveLinkMidY use single resolution, do NOT use too bigger A or B
//instead, u can move to near zero, invoke the calculation, then move to the origional position
extern ptTyp ptSolveLinkMidY(ptTyp A,ptTyp B,qm_float MA,qm_float MB);
extern qm_float ptDY(ptTyp a,ptTyp b);
extern ptTyp ptRotY(ptTyp p, qm_float r);
extern ptTyp ptUnitY(ptTyp A,ptTyp B);
extern qm_float ptAbsY(ptTyp A);
extern qm_float ptAngleIncY(ptTyp A,ptTyp B);
extern qm_bool ptPedalInSegY(ptTyp D,ptTyp A,ptTyp B);
extern qm_float ptDist2SegY(ptTyp D,ptTyp A,ptTyp B, qm_bool ext);

#endif /* QMATH_H_ */
