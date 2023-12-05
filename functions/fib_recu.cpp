#include <stdio.h>
#include <stdlib.h>

long* fibonacci(int n, long* data){
    //fibonacci: data[0], calls: data[1]     
    data[1]++;
    if (n == 0 || n == 1)
    {
        //data[0] = n;
        data[0] = n;
        //data[1]++;
        return data;
    }else
    {
        data[0] = fibonacci(n - 1, data)[0] + fibonacci(n - 2, data)[0];
        //data[1]++;
        return data;
    }  
}

int main(){
    int n = 1;
    scanf("%d", &n);
    long* fib_data = (long*)calloc(2, sizeof(long));

    if (fib_data == NULL)
    {
        printf("Error");
        return 0;
    }

    long* res = fibonacci(n, fib_data);
    printf("%li %li", res[0], res[1]);
    free(fib_data);
}