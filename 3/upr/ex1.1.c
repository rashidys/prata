#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("Переполнение при выполнении операций с целыми числами\n");
    char a = CHAR_MAX;
    short int b = SHRT_MAX;
    int c = INT_MAX;
    long d = LONG_MAX;
    long long e = LLONG_MAX;
    char tmp_char = a + 1; 
    short tmp_shrt = b + 1; 
    int tmp_int = c + 1; 
    long int tmp_long = d + 1; 
    long long tmp_llong = e + 1; 
    printf("Максимальный char = %d. Этоже число после прибавления 1 char = %d\n", CHAR_MAX, tmp_char);
    printf("Максимальный short = %d. Этоже число после прибавления 1 char = %d\n", SHRT_MAX, tmp_shrt);
    printf("Максимальный int = %d. Этоже число после прибавления 1 char = %d\n", INT_MAX, tmp_int);
    printf("Максимальный long = %ld. Этоже число после прибавления 1 char = %ld\n", LONG_MAX, tmp_long);
    printf("Максимальный long long = %lld. Этоже число после прибавления 1 char = %lld\n", LLONG_MAX, tmp_llong);
    float fa = FLT_MAX;
    double fb = DBL_MAX;
    long double fc = LDBL_MAX;
    float tmp_fa = (fa + 100) - fa;
    double tmp_fb = (fb + 100) - fb;
    long double tmp_fc = (fc + 100) - fc;
    printf("Максимальный float = %.f. Этоже число после прибавления 1 char = %f\n", fa , tmp_fa);
    printf("Максимальный double = %e. Этоже число после прибавления 1 char = %e\n", fb, tmp_fb);
    printf("Максимальный long double = %Le. Этоже число после прибавления 1 char = %Le\n", fc, tmp_fc);



}
