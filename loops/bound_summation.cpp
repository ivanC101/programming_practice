#include <stdio.h>

int compute_bound_sum(int n){
    int sum = 0, i = 0;
    
    do
    {
        ++i;
        sum += i + 7;     
    } while (sum < n);
    
    return i;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", compute_bound_sum(n));
}