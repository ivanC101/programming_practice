#include <stdio.h>

int iterative_computation(int a, int b, int c){
    int res = 0;
    for (int i = 1; i < a + 1; i++)
    {
        if (i % 2 != 0)
        {
            res += i;
        }
    }

    for (int i = 0; 0b1 << i <= b; ++i)
    {
        res -= 0b1 << i;
    }

    while (res % c == 0)
    {
        res /= c;
    }
    
    return res;  
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", iterative_computation(a, b, c));
}