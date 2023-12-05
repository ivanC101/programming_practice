#include <stdio.h>
#include <stdlib.h>

int* collatz(int n){

    int biggest_value = n;
    int* res = (int*) calloc(2, sizeof(int));

    if (res == NULL)
    {
        printf("Error");
        exit(0);
    }

    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n >>= 1;    
        }else{
            n *= 3;
            n++;
        }

        if (biggest_value < n)
        {
            biggest_value = n;
        }  
              
        res[0]++;
    }

    res[1] = biggest_value;
    return res;
}

int main(){
    int n;
    scanf("%d", &n);
    int* res = collatz(n);
    printf("%d %d", res[0], res[1]);
    free(res);
}