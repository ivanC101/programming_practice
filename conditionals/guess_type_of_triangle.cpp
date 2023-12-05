#include <stdio.h>
#include <string.h>

char* triang_print(int caras_num){
	char* res[] = {"escaleno", "isosceles", "equilatero", "error"};
	char* triangulo_resp = NULL;

	switch (caras_num)
	{
	case 0:
		triangulo_resp = strdup(res[0]);
		break;
	case 1:
		triangulo_resp = strdup(res[1]);
		break;
	case 2:
		triangulo_resp = strdup(res[2]);
		break;
	default:
		triangulo_resp = strdup(res[3]);
		break;
	}
}

int triang_tipo(int* caras, int tam) {

	//int uno = caras[0], dos = caras[1];
	int cuenta_cara = 0;
	for (int i = 0; i < tam - 1; i++)
	{
		if (caras[i] == caras[i+1])
		{
			cuenta_cara += 1;
		}
	}
	if (caras[0] == caras[tam - 1])
	{
		cuenta_cara += 1;
	}
	return cuenta_cara;
}

int main() {
	int caras[3];
	int tam = sizeof(caras) / sizeof(caras[0]);

	for (int i = 0; i < tam; ++i)
	{
		scanf("%d", &caras[i]);
	}

	char* triangulo_resp = triang_print(triang_tipo(caras, tam));
	printf("%s", triangulo_resp);
}