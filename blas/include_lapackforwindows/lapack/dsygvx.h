#ifdef __cplusplus
extern "C" { 
#endif  

#include "f2c.h" 

int dsygvx_(integer *itype, char *jobz, char *range, char *uplo, integer *n, doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *vl, doublereal *vu, integer *il, integer *iu, doublereal *abstol, integer *m, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, integer *lwork, integer *iwork, integer *ifail, integer *info);

#ifdef __cplusplus
}
#endif