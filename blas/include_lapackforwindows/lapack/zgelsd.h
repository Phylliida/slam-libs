#ifdef __cplusplus
extern "C" { 
#endif  

#include "f2c.h" 

int zgelsd_(integer *m, integer *n, integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, doublereal *s, doublereal *rcond, integer *rank, doublecomplex *work, integer *lwork, doublereal *rwork, integer *iwork, integer *info);

#ifdef __cplusplus
}
#endif