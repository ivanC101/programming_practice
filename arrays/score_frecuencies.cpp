#include <stdio.h>
#include <stdlib.h>

void score_professors(int p, int a, int* p_scores){
    int results[p] = {};
    for (int i = 0; i < a; i++)
    {
        results[p_scores[i] - 1]++;
    }

    for (int i = 1; i < p + 1; i++)
    {
        printf("%d-%d\n", i, results[i - 1]);
    }

}

int main(){
    int professors, alumns;

    scanf("%d %d", &professors, &alumns);

    int* p_scores = (int*)malloc(alumns * sizeof(professors));

    if (p_scores != nullptr)
    {
        for (int i = 0; i < alumns; i++)
        {
            scanf("%d", &p_scores[i]);
        }

        score_professors(professors, alumns, p_scores);

        free(p_scores);
    }else
    {
        printf("Error");
        return 1;
    }
}