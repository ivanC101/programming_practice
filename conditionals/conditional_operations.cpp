#include <stdio.h>
#include <stdlib.h>

int* calculos(int n){
	
	int* res = (int* )calloc(2, sizeof(int));

	if (res == NULL)
	{
		printf("Error");
		exit(0);
	}
	
	if (n % 2 == 0)
	{
		n >>= 1;
		res[0] = n;
		res[1] += 1;
	}else{
		n += 1;
		res[0] = n;
		res[1] += 1;
	}
	if (n >= 100)
	{
		n /= 100;
		res[0] = n;
		res[1] += 1;		
	}else if (n > 9 && n < 100)
	{
		n /= 10;
		res[0] = n;
		res[1] += 1;			
	}
	if (n % 3 == 0)
	{
		n -= 1;
		res[0] = n;
		res[1] += 1;		
	}
	
	return res;
}

int main(){
	int n;
	scanf("%d", &n);
	int* respuesta = calculos(n);
	printf("%d %d", respuesta[0], respuesta[1]);
	free(respuesta);
}