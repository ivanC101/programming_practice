#include <stdio.h>

long long factorial(int n){
    //unsigned long long res = 1;
    long long facts[21] = {
        1,
        1,
        2,
        6,
        24,
        120,
        720,
        5040,
        40320,
        362880,
        3628800,
        39916800,
        479001600,
        6227020800,
        87178291200,
        1307674368000,
        20922789888000,
        355687428096000,
        6402373705728000,
        121645100408832000,
        2432902008176640000,
    };
    // if (n == 0)
    // {
    //     return 1;
    // }else
    // {
    //     //return n * factorial(n - 1);
    //     for (int i = 1; i < n + 1; i++)
    //     {
    //         res *= i;
    //     }
    // }
    // return res;
    return facts[n];
}



int main(){
    int n;// = 10;
    scanf("%d", &n);
    // for (int i = 0; i < 21; i++)
    // {
    //     printf("%llu\n", factorial(i));
    // }
    
    printf("%lli", factorial(n));
}