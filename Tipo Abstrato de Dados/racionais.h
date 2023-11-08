#ifndef _RACIONAIS_H_

#define _RACIONAIS_H_

#include <stdio.h>

typedef struct _racionais_ {
	long int num; /* numerador   */
	long int den; /* denominador */
} Tq;

Tq somaTq(Tq q1, Tq q2); /* retorna q1 + q2 */
Tq subTq (Tq q1, Tq q2); /* retorna q1 - q2 */
Tq negTq (Tq q);         /* retorna -q      */
Tq prodTq(Tq q1, Tq q2); /* retorna q1 * q2 */
Tq divTq (Tq q1, Tq q2); /* retorna q1 / q2 */
Tq expTq (Tq q, int n);  /* retorna q^n, n inteiro. */

void strTq(char *s, Tq q); /* retorna q no formato string */

#endif
