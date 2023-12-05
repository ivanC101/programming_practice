#include <stdlib.h>
#include <stdio.h>

void winner_player(int n, int* card_series){
    int even_numbers = 0, even_count = 0, odd_numbers = 0, odd_count = 0;
    int even_sum = 0, odd_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (card_series[i] % 2 == 0)
        {
            even_numbers += card_series[i];
            even_count++;
        }else{
            odd_numbers += card_series[i];
            odd_count++;            
        }        
    }

    if (even_count == 0)
    {
        even_sum = 0;
    }else
    {
        even_sum = even_numbers/even_count;
    }
    if (odd_count == 0)
    {
        odd_sum = 0;
    }else
    {
        odd_sum = odd_numbers/odd_count;
    }

    if (even_sum > odd_sum)
    {
        printf("APARICIO");
    }else if (even_sum < odd_sum)
    {
        printf("NONILA");
    }else
    {
        printf("EMPATE!");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int* card_series = (int*)malloc(sizeof(int) * n);

    if (card_series == NULL)
    {
        printf("Error");
        return 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &card_series[i]);
    }
    
    winner_player(n , card_series);

    free(card_series);
}