#include <stdio.h>

int febrero_loco(int anio)
{
	if ((anio % 4 == 0) && ((anio % 100 != 0) || (anio % 400 == 0)))
	{
		return 29;
	}
	return 28;
}

int main()
{
	int anios[4];// = {1000,1004,1005,1200};
	int tam = sizeof(anios) / sizeof(anios[0]);

	for (int i = 0; i < tam; ++i)
	{
		scanf("%d", &anios[i]);
	}


	for (int i = 0; i < tam; ++i)
	{
		printf("%d ", febrero_loco(anios[i]));
	}

}