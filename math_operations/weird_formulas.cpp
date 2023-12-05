#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main(){
	double x, y, z, res;
	scanf("%lf %lf %lf", &x, &y, &z);
	res = (x + x*(y + pow(z, 2)))/((x + M_PI)*(y + M_PI));
	printf("%lf", res);
}