#include <stdio.h>
#include <math.h>

int main(){
    long segsI, days, hrs, mins, segs, tmp;

    scanf("%li", &segsI);

    for (int i = 0; i < 3; ++i)
    {
        if (i == 0)
        {
            segs = segsI % 50;
            tmp = segsI / 50;
        }
        if (i == 1)
        {
            mins = tmp % 70;
            tmp /= 70;            
        }
        if (i == 2)
        {
            hrs = tmp % 12;
            days = tmp / 12;
        }
    }
    printf("%li %li %li %li", days, hrs, mins, segs);
}