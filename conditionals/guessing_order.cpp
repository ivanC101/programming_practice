#include <stdio.h>

char determina_secuencia(int *num, int tam)
{
	bool igual_inicial = 0;
	int cuenta_menores = 0, cuenta_mayores = 0, cuenta_iguales = 0;

	for (int i = 0; i < tam - 1; i++)
	{
		if (i == 0)
		{
			if (num[i] < num[i + 1])
			{
				cuenta_menores += 1;
				continue;
			}
			if (num[i] > num[i + 1])
			{
				cuenta_mayores += 1;
				continue;
			}
			if (num[i] == num[i + 1])
			{
				cuenta_iguales += 1;
				igual_inicial = true;
				continue;
			}
		}

		// No tiene orden
		if ((num[i] < num[i + 1]) && (cuenta_mayores > 0))
		{
			return 'X';
		}
		if ((num[i] > num[i + 1]) && (cuenta_menores > 0))
		{
			return 'X';
		}
		//

		if (num[i] < num[i + 1])
		{
			cuenta_menores += 1;
		}
		if (num[i] > num[i + 1])
		{
			cuenta_mayores += 1;
		}
		if (num[i] == num[i + 1])
		{
			cuenta_iguales += 1;
		}
	}

	if (cuenta_menores > 0 && cuenta_iguales == 1 && !igual_inicial)
	{
		return 'C';
	}
	if (cuenta_menores > 0 && cuenta_iguales == 1 && igual_inicial)
	{
		return 'C';
	}

	if (cuenta_mayores > 0 && cuenta_iguales == 1 && !igual_inicial)
	{
		return 'D';
	}
	if (cuenta_mayores > 0 && cuenta_iguales == 1 && igual_inicial)
	{
		return 'D';
	}		

	if (cuenta_menores == 2)
	{
		return 'C';
	}
	if (cuenta_mayores == 2)
	{
		return 'D';
	}
	if (cuenta_iguales == 2)
	{
		return 'I';
	}
	return ' ';
}

int main()
{
	//int entrada[3] = {-4, 9, 20};
	//int entrada[3] = {8, 7, 0};
	//int entrada[3] = {5, 5, 5};
	//int entrada[3] = {2, -1, 90};
	//int entrada[3] = {7, 7, 0};
	int entrada[3];// = {-99, -100,  0};
	//				 { 0, -1, -1} 'D'
	//				 { 1,  1,  0} 'D'
	//				 { 0,  1,  1} 'C'
	//				 {-1, -1,  0} 'C'	
	int tam = sizeof(entrada) / sizeof(entrada[0]);
	scanf("%d %d %d", &entrada[0], &entrada[1], &entrada[2]);

	char respuesta = determina_secuencia(entrada, tam);
	printf("%c", respuesta);
}