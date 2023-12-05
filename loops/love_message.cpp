#include <stdio.h>
#include <stdlib.h>

void imprime_corazones(int num, int* corazones){
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < corazones[i]; j++)
        {
            printf("<3");
        }
        printf("\n");
    }
    
}

int main(){
    int num_mensajes;
    int* corazones = (int*)malloc(sizeof(int) * num_mensajes);

    scanf("%d", &num_mensajes);

    if (corazones == NULL)
    {
        printf("Error");
        return 0;
    }
    
    for (int i = 0; i < num_mensajes; i++)
    {
        scanf("%d", &corazones[i]);
    }
    
    // for (int i = 0; i < num_mensajes; i++)
    // {
    //     printf("%d ", corazones[i]);
    // }

    imprime_corazones(num_mensajes,  corazones);
    free(corazones);
}