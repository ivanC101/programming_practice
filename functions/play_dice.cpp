#include <stdio.h>
#include <math.h>
void play_dice_game(int faces, int rounds){
    
    //array to use as counter
    int variable[rounds] = {};
    for (int i = 0; i < rounds; i++)
    {
        variable[i] = 1;
    }

    int rows = pow(faces, rounds);
    
    for (int i = 1; i < rows + 1; i++)
    {
        for (int j = 0; j < rounds; j++)
        {
            printf("%d", variable[j]);
        }
        printf("\n");

        variable[rounds - 1]++;
        for (int k = rounds - 1; k > 0; k--)
        {
            if (variable[k] == faces + 1)
            {
                variable[k] = 1;
                variable[k - 1]++;
            }
        }
    }
}


int main(){
    int d, n;
    scanf("%d %d", &d, &n);
    play_dice_game(d, n);
}