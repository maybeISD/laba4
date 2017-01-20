#include <stdio.h>
#include "func.h"

int main()
{
	float a, b, c, d;
	printf("Введите A, B, C: \n");
	scanf("%f %f %f", &a, &b, &c);
	d = desk(a, b, c);
	if( d < 0)
	{
		printf("Решений нет!");
		return 1;
	}
	printf("x1=%f x2=%f", (-b + sqrt(d))/ 2*a, (-b - sqrt(d))/ 2*a);
	return 0;
}