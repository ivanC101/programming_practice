#include <stdio.h>
#include <math.h>

int main(){
    long robados, lider_tam;
    int banda;

    scanf("%li %d", &robados, &banda);
    if (robados % 2 == 0)
    {
        lider_tam = robados / 2;
    }
    else
    {
        lider_tam = (robados / 2) + 1;
    }
    
    lider_tam += ((robados / 2) % (banda - 1));

    printf("%li", lider_tam);
}