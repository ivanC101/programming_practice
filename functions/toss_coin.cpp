#include <stdio.h>

void toss_curious_coin(int rounds){

    int rows = 1 << rounds;
    //0: 'A'
    //1: 'X'
    //bool coin[rounds] = {};
    int counter[rounds] = {};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rounds; j++)
        {
            if (counter[j] == 0)
            {
                printf("A");
            }else
            {
                printf("X");
            }           
        }
        printf("\n");
        //coin[rounds - 1] = !coin[rounds - 1];
        counter[rounds - 1]++;

        for (int k = rounds - 1; k > 0; k--)
        {
            if (counter[k] == 2)
            {
                counter[k] = 0;
                counter[k - 1]++;
            }          
        }     
    }
}

int main(){
    int n;
    scanf("%d", &n);
    toss_curious_coin(n);
}