#include <stdio.h>
// #include <stdlib.h>
#include <string>
#include <iostream>

std::string conv_num_string(long num)
{
	// char* prueba_str = calloc()
	// char escalera_str[11];
	// int num_to_string = snprintf(escalera_str, sizeof(escalera_str), "%li", num);

	// if (num_to_string < 0 || num_to_string >= sizeof(num_to_string))
	// {
	// 	printf("Conversion error");
	// 	return 0;
	// }
	// printf("%s\n", escalera_str);
	return std::to_string(num);
}

int prueba_escalera(long num)
{
	// char *str = conv_num_string(num);
	// int mitad = (sizeof(str) / 2) + 1;
	std::string converted_num = conv_num_string(num);
	std::cout << converted_num << " " << converted_num.size() << "\n";
	int mitad = (converted_num.size() / 2) + 1;

	//bool bajada_ok = 0;

	for (int i = 0; i < mitad - 1; i++)
	{
		if (converted_num[i + 1] - converted_num[i] != 1)
		{
			return 0;
		}
		// No es escalera
		// if ((str[i + 1] - str[i] != 1) || (str[i + 1] - str[i] != -1))
		//{
		//	return 0;
		//}
	}
	printf("hola_prueba_escalera\n");


	for (int i = mitad; i < converted_num.size() - 2; i++)
	{
		if (converted_num[i] - converted_num[i + 1] != 1)
		{
			return 0;
		}
	}

	printf("%li\n", num);
	return 1;
	// else if (!bajada_ok)
	// {
	// 	return 0; // La mitad no es subida, no es escalera
	// }
}

void es_escalera(long escalera, int *arreglar)
{
	int intento = 0;
	long escalera_copia = escalera;

	if (conv_num_string(escalera).size() % 2 == 0)
	{
		printf("nos rendimos");
		return;
	}
	if (prueba_escalera(escalera) == 1)
	{
		printf("es escalera inicialmente");
		return;
	}
	if (intento == 0)
	{
		printf("hola\n");
		intento += 1;
		escalera_copia -= arreglar[0];
		escalera_copia /= arreglar[1] + 1;
		printf("e: %li\n", escalera_copia);
		if (prueba_escalera(escalera_copia) == 1)
		{
			printf("es escalera despues del primer intento");
			return;
		}
		printf("intento: %d\n", intento);
	}
	if (intento == 1)
	{
		printf("hola2\n");
		intento += 1;
		escalera_copia -= arreglar[0] + arreglar[1];
		escalera_copia += 1;
		if (prueba_escalera(escalera_copia) == 1)
		{
			printf("es escalera despues del segundo intento");
			return;
		}
		printf("intento: %d\n", intento);
		printf("nos rendimos");
		return;
	}
}

int main()
{
	long escalera_i = 247;
	int arreglar[2] = {5, 1};
	scanf("%li", &escalera_i);
	scanf("%d", &arreglar[0]);
	scanf("%d", &arreglar[1]);

	es_escalera(escalera_i, arreglar);
}