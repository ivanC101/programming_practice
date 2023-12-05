#include <stdio.h>
void genera_triangulos(int m, int n){
    int cuenta_t_pares = 0;
    int cuenta_t_impares = 0;
    
    //impares
    for (int i = m; i < n + 1; ++i)
    {
        if (i % 2 != 0)
        {
            //printf("\n-%d ", i);
            for (int j = i; j < n + 1; ++j){
                if (j % 2 == 0)
                    continue;
                //printf("--%d ", j);
                for (int k = j; k < n + 1; ++k){
                    if (k % 2 == 0)
                        continue;
                    if (i + j <= k)            
                        continue;
                    //i + j > k
                    cuenta_t_impares += 1;
                    //printf("---%d ", k);
                }
                //printf("\n");  
            }
        }
        if (i % 2 == 0)
        {
            //printf("\n:%d ", i);
            for (int j = i; j < n + 1; ++j){
                if (j % 2 != 0)
                    continue;
                //printf("--%d ", j);
                for (int k = j; k < n + 1; ++k){
                    if (k % 2 != 0)
                        continue;
                    if (i + j <= k)            
                        continue;
                    //i + j > k
                    cuenta_t_pares += 1;
                    //printf("---%d ", k);
                }
                //printf("\n");  
            }            
        }         
    }
    printf("%d %d", cuenta_t_impares, cuenta_t_pares);
    
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    genera_triangulos(m, n);
}