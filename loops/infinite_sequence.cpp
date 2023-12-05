#include <stdio.h>

void infinite_sequence(int n){
    int aux = 0;
    bool going_up = true;

    if (n == 0)
    {
        return;
    }

    for (int i = 0; i < n; i++)
    {   
        if (going_up)
        {
            if (aux == 5)
            {
                going_up = false;
                --aux;
                printf("%d ", aux);
                continue;
            }
            ++aux;
            printf("%d ", aux);
            continue;
        }

        if (!going_up)
        {
            if (aux == 1)
            {
                going_up = true;
                ++aux;
                printf("%d ", aux);                
                continue;
            }  
            --aux;
            printf("%d ", aux);
            continue;            
        }                
    }    
}

int main(){
    int n;
    scanf("%d", &n);
    infinite_sequence(n);
}