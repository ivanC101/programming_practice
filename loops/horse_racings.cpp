#include <stdio.h>
#include <vector>
#include <iostream>
#define CABALLOS 2

void narrate_race(std::vector<int> *race_log, int horses, int min){
    int horseA_speed = 0, horseB_speed = 0, max_distance = 0;
    bool horseA_ahead = 0, horseB_ahead = 0, tie_race = 0, close_together = 0;

    for (int i = 1; i < min + 1; i++)
    {
        horseA_speed += race_log[0][i - 1];
        horseB_speed += race_log[1][i - 1];

        if (i == 1 && horseA_speed == horseB_speed)
        {
            close_together = true;
        }

        if (horseA_speed > horseB_speed && !horseA_ahead)
        {
            horseA_ahead = true;
            horseB_ahead = false;
            tie_race = false;
            close_together = false;
            printf("Al minuto %d el caballo %d toma la delantera\n", i, 1);

        }else if (horseA_speed < horseB_speed && !horseB_ahead)
        {
            horseA_ahead = false;
            horseB_ahead = true;
            tie_race = false;
            close_together = false;
            printf("Al minuto %d el caballo %d toma la delantera\n", i, 2);
        }else if(horseA_speed == horseB_speed && !tie_race && !close_together){
            tie_race = true;
            printf("Al minuto %d los caballos van empatados\n", i);
        }

        if (max_distance < abs(horseA_speed - horseB_speed))
        {
            max_distance = abs(horseA_speed - horseB_speed);
        }

    }

    if (horseA_speed > horseB_speed)
    {
        printf("Termina la carrera y gana el caballo %d\n", 1);
    }
    else if (horseA_speed < horseB_speed)
    {
        printf("Termina la carrera y gana el caballo %d\n", 2);
    }
    else
    {
        printf("Termina la carrera y empatan los caballos\n");
    }
    
    printf("La distancia maxima entre los caballos fue de %d", max_distance);
    
}

int main(){
    int min;
    scanf("%d", &min);
    //int race_log[CABALLOS][min];// = {{1, 3, 5},{2, 4, 6}};
    std::vector<int> race_log[CABALLOS];

    for (int i = 0; i < min; i++)
    {
        //scanf("%d %d", &race_log[0][i], &race_log[1][i]);
        int tmp1, tmp2;
        std::cin >> tmp1 >> tmp2;
        race_log[0].push_back(tmp1);
        race_log[1].push_back(tmp2);
    }
    
    narrate_race(race_log, CABALLOS, min);
    
}