#include <stdio.h>

void draw_triangle(int n){

    if (n == 0)
    {
        return;
    }
    if (n == 1)
    {
        printf("@");
        return;
    }

    int blank_spaces = n >> 1;
    int middle = blank_spaces + 1;
    int pos = blank_spaces;
    //int at_char = 0;
    
    for (int i = 1; i < (n >> 1) + 2; i++)
    {
        pos = blank_spaces;
        for (int j = 1; j < n + 1; j++)
        {   
            //at_char = blank_spaces;
            
            if (j == middle)
            {
                printf("@");
                pos = blank_spaces;
                continue;
            }
            if (j <= blank_spaces  || j == ((n - pos) + 1))
            {
                printf(" ");
                pos--;
            }else if (j > blank_spaces && j < n - blank_spaces) 
            {
                printf("@");
            }
            else{
                printf("@");
            }
                   
        }
        blank_spaces--;
        printf("\n");
        
    }
    return;
}

int main(){
    int n;// = 101;
    scanf("%d", &n);
    draw_triangle(n);
}