#ifndef _COMPLEX_H_

#define _COMPLEX_H_

#include <math.h>

typedef struct _complex_ {
	double re;
	double im;
} Tcomplex;

Tcomplex somaTcomplex(Tcomplex c1, Tcomplex c2); /* retorna c1 + c2 */
Tcomplex subTcomplex (Tcomplex c1, Tcomplex c2); /* retorna c1 - c2 */
Tcomplex negTcomplex (Tcomplex c);               /* retorna -c      */
Tcomplex prodTcomplex(Tcomplex c1, Tcomplex c2); /* retorna c1 * c2 */
Tcomplex divTcomplex (Tcomplex c1, Tcomplex c2); /* retorna c1 / c2 */
Tcomplex expTcomplex (Tcomplex c, int n);        /* retorna c^n, n inteiro. */

void strTcomplex(char *s, Tcomplex q, unsigned char d);         /* retorna c no formato string com precisão de d casas decimais */

#endif
