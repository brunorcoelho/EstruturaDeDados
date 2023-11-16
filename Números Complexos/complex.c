/*****************************************************
Nome: Bruno Ribeiro Coelho
*****************************************************/
#include "complex.h"

/* retorna c1 / c2 */
Tcomplex divTcomplex(Tcomplex c1, Tcomplex c2) {
    Tcomplex result;
    double denominador = c2.re * c2.re + c2.im * c2.im;

    result.re = (c1.re * c2.re + c1.im * c2.im) / denominador;
    result.im = (c1.im * c2.re - c1.re * c2.im) / denominador;

    return result;
}

/* retorna c^n, n inteiro. */
Tcomplex expTcomplex(Tcomplex c, int n) {
    Tcomplex result = {1, 0}; // Initialize result to 1 + 0i

    for (int i = 0; i < n; ++i) {
        result = prodTcomplex(result, c);
    }

    return result;
}

/* retorna -c */
Tcomplex negTcomplex(Tcomplex c) {
    Tcomplex result = {-c.re, -c.im};
    return result;
}

/* retorna c1 * c2 */
Tcomplex prodTcomplex(Tcomplex c1, Tcomplex c2) {
    Tcomplex result;

    result.re = c1.re * c2.re - c1.im * c2.im;
    result.im = c1.re * c2.im + c1.im * c2.re;

    return result;
}

/* retorna c1 + c2 */
Tcomplex somaTcomplex(Tcomplex c1, Tcomplex c2) {
    Tcomplex result = {c1.re + c2.re, c1.im + c2.im};
    return result;
}

/* retorna c1 - c2 */
Tcomplex subTcomplex(Tcomplex c1, Tcomplex c2) {
    Tcomplex result = {c1.re - c2.re, c1.im - c2.im};
    return result;
}

/* retorna c no formato string com precisao de d casas decimais */
void strTcomplex(char *s, Tcomplex q, unsigned char d) {
    sprintf(s, "%2.*f + %2.*fi", d, q.re, d, q.im);
}
