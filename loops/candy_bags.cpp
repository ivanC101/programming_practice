#include <stdlib.h>
#include <stdio.h>

int candy_bags(int* bags, int* prices, int size){
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        res += bags[i] * prices[i];
    }
    return res;
}

int main(){
    int n;
    scanf("%d", &n);
    int* bags = (int*)malloc(n * sizeof (int));
    int* prices = (int*)malloc(n * sizeof (int));
    if (bags == NULL || prices == NULL)
    {
        printf("Error");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &bags[i], &prices[i]);
    }
    
    printf("%d", candy_bags(bags, prices, n));
    
    free(bags);
    free(prices);
}