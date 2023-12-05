#include <stdio.h>
#include <limits.h>

int define_caso(long *num_arr, int tam)
{
	long max_val = -1, min_val = LONG_MAX;
	int max_pos = 0, min_pos = 0;
	bool caso2_max_i = 1, caso2_min_i = 1;
	// bool max_doble = 0, min_doble = 0, iguales = 0;

	// #1 Todos son iguales
	if ((num_arr[0] == num_arr[1]) && (num_arr[0] == num_arr[2]))
	{
		return 0;
	}
	// #2 Todos son diferentes
	if ((num_arr[0] != num_arr[1]) && (num_arr[1] != num_arr[2]) && (num_arr[0] != num_arr[2]))
	{
		// Determinar valor minimo y valor maximo
		for (int i = 0; i < tam - 1; i++)
		{
			if ((num_arr[i] < num_arr[i + 1]))
			{
				if (num_arr[i] < min_val)
				{
					min_val = num_arr[i];
					min_pos = i;
					caso2_min_i = false;
				}
				if (caso2_max_i)
				{
					max_val = num_arr[i+1];
					max_pos = i + 1;
					caso2_max_i = false;
				}
				else if (num_arr[i + 1] > num_arr[max_pos])
				{
					max_val = num_arr[i+1];
					max_pos = i + 1;
				}
			}
			else if (num_arr[i] > num_arr[i + 1])
			{
				if (num_arr[i] > max_val)
				{
					max_val = num_arr[i];
					max_pos = i;
					caso2_max_i = false;
				}
				if (caso2_min_i)
				{
					min_val = num_arr[i+1];
					min_pos = i + 1;
					caso2_min_i = false;
				}
				else if (num_arr[i + 1] < num_arr[min_pos])
				{
					min_val = num_arr[i+1];
					min_pos = i + 1;
				}
			}
		}
		if (min_pos == 0 && max_pos == 2)
		{
			return 0;
		}
		else if (min_pos == 0 && max_pos == 1)
		{
			return 1;
		}
		else if (min_pos == 1 && max_pos == 2)
		{
			return 1;
		}
		else if (min_pos == 2 && max_pos == 1)
		{
			return 2;
		}
		else if (min_pos == 1 && max_pos == 0)
		{
			return 2;
		}
		else if (min_pos == 2 && max_pos == 0)
		{
			return 1;
		}
	}
	// #3 2 iguales
	if (num_arr[0] == num_arr[1] || num_arr[1] == num_arr[2] || num_arr[0] == num_arr[2])
	{
		for (int i = 0; i < tam - 1; i++)
		{
			if (num_arr[i] != num_arr[i + 1])
			{
				if (num_arr[i] < num_arr[i + 1])
				{
					min_val = num_arr[i];
					min_pos = i;
					max_pos = i + 1;
				}
				else
				{
					max_val = num_arr[i];
					min_pos = i + 1;
					max_pos = i;
				}
			}

			if (num_arr[i] == num_arr[i + 1])
			{
				if (num_arr[0] > num_arr[tam - 1])
				{
					min_pos = tam - 1;
					max_pos = 0;
				}
				if (num_arr[0] < num_arr[tam - 1])
				{
					min_pos = 0;
					max_pos = tam - 1;
				}
			}
		}

		if (max_val == num_arr[max_pos] && max_pos == 2)
		{
			return 0;
		}
		else if (max_val == num_arr[max_pos] && max_pos == 1)
		{
			return 1;
		}
		else if (max_val == num_arr[max_pos] && max_pos == 0)
		{
			return 1;
		}
		else if (min_val == num_arr[min_pos] && min_pos == 2)
		{
			return 1;
		}
		else if (min_val == num_arr[min_pos] && min_pos == 1)
		{
			return 0;
		}
		else if (min_val == num_arr[min_pos] && min_pos == 0)
		{
			return 0;
		}
	}
	return 0;
}

int main()
{
	// struct numero num_arr[3];
	// long num_arr[3] = {0, 2, 2};
	//long num_arr[3] = {3, 1, 2};
	long num_arr[3];
	int tam = sizeof(num_arr) / sizeof(num_arr[0]);

	for (int i = 0; i < 3; i++)
	{
		scanf("%li", &num_arr[i]);
	}

	printf("%d", define_caso(num_arr, tam));
}