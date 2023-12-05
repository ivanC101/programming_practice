#include <stdio.h>
#include <math.h>
#include <float.h>

float distancia(float x1, float y1, float x2, float y2){
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float distancia_menor(float *coord){
	float mas_corto = FLT_MAX, tmp;
	for (int i = 0; i < 4; ++i)
	{

		if (i == 3)
		{
			//i = 3
			tmp = distancia(coord[2*i], coord[1+(2*i)], coord[i-i], coord[(i+1)-i]);
			printf("%f\n", tmp);
		} else{
			// i = 0,1,2
			tmp = distancia(coord[2*i], coord[1+(2*i)], coord[2+(2*i)], coord[3+(2*i)]);
			printf("%f\n", tmp);
		}

		if (tmp < mas_corto)
		{
			mas_corto = tmp;
		}

	}
	return mas_corto;
}

int main(){
	// x1,y1,x2,y2,x3,y3,x4,y4
	float coord[8];

	for (int i = 0; i < 8; ++i)
	{
		scanf("%f", &coord[i]);
	}

	printf("%f", distancia_menor(coord));

}