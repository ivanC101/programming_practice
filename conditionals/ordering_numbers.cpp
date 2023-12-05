#include <stdio.h>
#include <algorithm>

int main()
{
	// int A, B, C, D;
	int num[4];//= {56, 47, 7, 9};//, order[4], min = -INT_MAX;
	int size = sizeof(num) / sizeof(num[0]);

	for(int i = 0; i < size; ++i)
	{
		scanf("%d", &num[i]);
	}

	// 1a pasada revisando derecha y despues izquierda
	for (int i = 0; i < size - 1; ++i)
	{
		
		// if (num[i] < min)
		// {
		//	min = num[i];
		// }
		
		if (i == 0)
		{
			if (num[i] > num[i + 1])
			{
				std::swap(num[i], num[i + 1]);
			}
		}
		else
		{
			if (num[i] > num[i + 1])
			{
				std::swap(num[i], num[i + 1]);
			}
			if (num[i] < num[i - 1])
			{
				std::swap(num[i], num[i - 1]);
			}
		}

		//Agregar otro caso en el que revise por el lado contrario
	}

	// 2a pasada para solo revisando derecha
	for (int i = size - 1; i > 0; --i)
	{
		if (num[i] < num[i - 1])
		{
			std::swap(num[i], num[i - 1]);
		}
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d ", num[i]);
	}
}