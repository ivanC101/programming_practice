#include <stdio.h>


void score_marbles(int marbles, int* marbles_dis, int boxes){
    int marbles_boxes[boxes] = {};

    for (int i = 0; i < marbles; i++)
    {
        marbles_boxes[marbles_dis[i] - 1]++;
    }

    for (int i = 0; i < boxes; i++)
    {
        printf("%d\n", marbles_boxes[i]);
    }

}

int main(){
    int boxes, marbles;

    scanf("%d %d", &boxes, &marbles);

    int marbles_distribution[marbles];

    for (int i = 0; i < marbles; i++)
    {
        scanf("%d", &marbles_distribution[i]);
    }

    score_marbles(marbles, marbles_distribution, boxes);
}