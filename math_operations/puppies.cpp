#include <stdio.h>

int main() {
	int cachorros, planea, hijos, noquedarse;
	
	scanf("%d %d %d", &cachorros, &planea, &hijos);
	
	noquedarse = cachorros - planea;
	
	printf("%d", planea + noquedarse % (hijos + 1));
	
}