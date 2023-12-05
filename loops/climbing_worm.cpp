#include <stdio.h>
int climbing_hole(int height, int up, int down){
    int time = 0, position = 0;
    while (position < height)
    {
        position += up;
        time++;
        if (position >= height)
        {
            break;
        }
        position -= down;
        time++;       
    }
    return time;
}

int main(){
    int height, up, down;
    scanf("%d %d %d", &height, &up ,&down);
    printf("%d", climbing_hole(height, up, down));
}