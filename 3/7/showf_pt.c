#include <stdio.h>
int main(void) {
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    float a = 3.4E38 * 100.0f;
    printf("%f может ьфть записано как %e\n", aboat, aboat);

    printf("И его %a в шестнадцатиричной, представляющей степени 2, в форме записи\n", aboat);
    printf("%f может бфть записано как %e\n", abet, abet);
    printf("%Lf  может быть записано как %Le\n", dip, dip);
    printf("%e \n", a);
    return 0;
}
