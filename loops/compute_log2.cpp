#include <stdio.h>
int compute_log2(int n){
    int res = 0, remainder = n;

    while(remainder > 1){
        remainder >>= 1;
        res += 1;
    }
    return res;
}

int main(){
    unsigned long n;
    scanf("%lu", &n);
    printf("%lu", compute_log2(n));
}