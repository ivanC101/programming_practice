#include <stdio.h>
#include <math.h>
int sum_n_divide(long n){
    int divisor = 1, res = 0;
    while (floor(n/divisor) > 0)
    {
        res += floor(n/divisor);
        divisor <<= 1;
    }
    return res;
}

int main(){
    long n;// = 6;
    scanf("%li", &n);
    printf("%li", sum_n_divide(n));
}