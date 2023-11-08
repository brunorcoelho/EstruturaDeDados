#include <stdio.h>
#include "racionais.h"

int main(char argv[], int argn) {
	Tq q1, q2, q3, q4;
	char s[50];
	
	q1.num =  3; q1.den =  5 + 3;	
	q2.num =  4; q2.den =  3;
	q3.num =  1; q3.den = -6;
	strTq(s, q1); printf("q1: %s\n", s);
	strTq(s, q2); printf("q2: %s\n", s);
	strTq(s, q3); printf("q3: %s\n", s);

	
	q4 = somaTq(q2, q1);
	strTq(s, q4);
	printf("q4 = q2 + q1 = %s\n", s);

	q3 = negTq(q3);
	strTq(s, q3);
	printf("q3 = -q3 = %s\n", s);

	q4 = subTq(q2, q3);
	strTq(s, q4);
	printf("q4 = q2 - q3 = %s\n", s);
	
	q1 = prodTq(q3, q4);
	strTq(s, q1);
	printf("q1 = q3 * q4 = %s\n", s);

	q2 = divTq(q3, q4);	
	strTq(s, q2);
	printf("q2 = q3 / q4 = %s\n", s);
	q1.num = 2;
	q1.den = 3;
	strTq(s, q1); printf("q1: %s\n", s);
	q3 = expTq(q1, 20);
	strTq(s, q3); printf("q1^4: %s\n", s);
	
	return 0;
}