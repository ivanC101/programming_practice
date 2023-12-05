#include <stdio.h>
int k_prime(int k){
    int prime_number, div_counter = 0, prime_pos = 1;

    if (k == 1)
    {
        return 2;
    }
    
    for (int i = 3; prime_pos != k; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            if (i % j == 0)
            {
                prime_number = i;
                div_counter++;
            }
            if (div_counter > 2)
            {
                break;
            }
        }
        if (div_counter == 2)
        {
            prime_pos++;
        }
        div_counter = 0;
    }
    return prime_number;
}

int main(){
    int k;
    scanf("%d", &k);
    printf("%d", k_prime(k));
}