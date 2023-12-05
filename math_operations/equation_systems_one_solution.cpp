#include <stdio.h>
#include <math.h>

int main(){
    float a1, b1, c1, a2, b2, c2;
    float a1a2, a2b1, a2c1, n_a1a2, n_a1b2, n_a1c2, x, y;
    scanf("%f%f%f%f%f%f", &a1, &b1, &c1, &a2, &b2, &c2); 
    //ecuacion 1
    //a1a2 = a1*a2; 
    a2b1 = a2*b1;
    //printf("%f\n", a2b1);
    a2c1 = a2*c1;
    //ecuacion 2
    //n_a1a2 = -a1a2; 
    n_a1b2 = -a1*b2;
    //printf("%f\n", n_a1b2);
    n_a1c2 = -a1*c2;
    //suma de ecuaciones
    y = (a2c1 + n_a1c2)/(a2b1 + n_a1b2);
    x = (c1 - b1*y)/a1;
    printf("%f %f", x, y);
}