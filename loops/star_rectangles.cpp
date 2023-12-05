#include <stdio.h>

void draw_rectangle(int rows, int columns){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

int main(){
    int rows, columns;
    scanf("%d %d", &rows, &columns);
    draw_rectangle(rows, columns);
}