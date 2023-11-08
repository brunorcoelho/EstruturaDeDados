#include "racionais.h"

/* retorna q1 / q2 */
Tq divTq (Tq q1, Tq q2) {
	Tq aux;
	
	aux.num = q1.num * q2.den;
	aux.den = q1.den * q2.num;
	
	return aux;
}

/* retorna q^n, n inteiro. */
Tq expTq(Tq q, int n) {
	Tq aux;
	int i;
	
	if (n > 0) {
		if (n == 1)
			return q;
			
		aux = expTq(q, n/2);
		aux = prodTq(aux, aux);
		if ((n % 2)==1) {
			aux = prodTq(aux, q);
		}
		return aux;
	} else {
	}
}

/*
Tq expTq(Tq q, int n) {
	Tq aux;
	int i;
	
	if (n > 0) {
		aux.num = q.num;
		aux.den = q.den;
		for(i=1; i<n; i++) {
			aux = prodTq(aux, q);
		}
	}
	return aux;
}
*/

/* retorna -q      */
Tq negTq (Tq q){
	if (q.den < 0)
		q.den = -q.den;
	else
		q.num = -q.num;
	
	return q;
}

/* retorna q1 * q2 */
Tq prodTq(Tq q1, Tq q2) {
	Tq aux;
	
	aux.num = q1.num * q2.num;
	aux.den = q1.den * q2.den;
	
	return aux;
}

/* retorna q1 + q2 */
Tq somaTq(Tq q1, Tq q2) {
	Tq aux;
	
	aux.num = q1.num * q2.den + q1.den * q2.num;
	aux.den = q1.den * q2.den;
	return aux;
}

/* retorna q no formato string */
void strTq(char *s, Tq q) {
	Tq aux;
	
	if (q.den < 0) {
		aux.num = -q.num; aux.den = -q.den;
	} else {
		aux.num = q.num; aux.den = q.den;
	}

	if (s != NULL) {
		sprintf(s, "%ld/%ld", aux.num, aux.den);
	}
}

/* retorna q1 - q2 */
Tq subTq (Tq q1, Tq q2) {
	Tq aux;
	
	aux = somaTq(q1, negTq(q2));
	return aux;
}