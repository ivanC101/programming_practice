#include <stdio.h>
#include <stdlib.h>

int *adivinar_con_pos(int num, long long pos)
{

	long long sumatoria1, sumatoria2;
	bool suma1_bandera = 0, suma2_bandera = 0;

	int *res = (int *)malloc(2 * sizeof(int));

	if (res == NULL)
	{
		printf("Error al reservar memoria");
		return NULL;
	}

	if (pos == 0)
	{
		res[0] = res[1] = num;
		return res;
	}
	if (pos % 3 == 0)
	{
		res[0] = res[1] = num;
		return res;
	}

	sumatoria1 = pos - 1;//(floor(pos / 3) + 1);
	if (sumatoria1 % 3 == 0)
	{
		suma1_bandera = true;
	}
	if (!suma1_bandera)
	{
		sumatoria2 = pos - 2;
		if (sumatoria2 % 3 == 0)
		{
			suma2_bandera = true;
		}
	}

	if (num == 1)
	{
		if (suma1_bandera)
		{
			// valor en posiciones antes
			res[0] = 3;
			// valor en posiciones despues
			res[1] = 2;
			return res;
		}
		if (suma2_bandera)
		{
			res[0] = 2;
			res[1] = 3;
			return res;
		}
	}
	else if (num == 2)
	{
		if (suma1_bandera)
		{
			// valor en posiciones antes
			res[0] = 1;
			// valor en posiciones despues
			res[1] = 3;
			return res;
		}
		if (suma2_bandera)
		{
			res[0] = 3;
			res[1] = 1;
			return res;
		}
	}
	else if (num == 3)
	{
		if (suma1_bandera)
		{
			// valor en posiciones antes
			res[0] = 2;
			// valor en posiciones despues
			res[1] = 1;
			return res;
		}
		if (suma2_bandera)
		{
			res[0] = 1;
			res[1] = 2;
			return res;
		}
	}
	return res;
}

int main()
{
	int num_actual;
	long long posicion;
	scanf("%d %lli", &num_actual, &posicion);

	int *respuesta = adivinar_con_pos(num_actual, posicion);
	if (respuesta == NULL)
	{
		printf("Termina");
		return 0;
	}

	printf("%d %d", respuesta[0], respuesta[1]);
	free(respuesta);
}