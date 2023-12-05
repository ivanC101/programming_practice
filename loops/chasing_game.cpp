#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long escape_vel(int chasing_t, int* pos, int* robot_disp){
    int robot_pos = pos[0], fer_pos = pos[1];
    float final_vel = 0;

    for (int t = 1; t < chasing_t + 1; ++t)
    {
        // v = x / t
        robot_pos += robot_disp[t - 1];
        //always 1 meter ahead
        fer_pos = robot_pos + 1; 
    }

    final_vel = (float)(fer_pos - pos[1])/chasing_t;

    return ceil(final_vel);
}

int main(){
    long chasing_t;// = 3; 
    int pos[2];// = {1 , 3}; //robot_pos, fer_pos;

    scanf("%li %d %d", &chasing_t, &pos[0], &pos[1]);

    int* robot_disp = (int*)malloc(sizeof(int) * chasing_t);

    //int robot_disp[3] = {3 , 7, 9}; 

    if (robot_disp == NULL)
    {
        printf("Error");
        return 0;
    }

    for (int i = 0; i < chasing_t; i++)
    {
        scanf("%d", &robot_disp[i]);
    }

    printf("%lu", escape_vel(chasing_t, pos, robot_disp));

    free(robot_disp);
}