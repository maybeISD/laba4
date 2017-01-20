#include <stdio.h>
#include "func.h"

int main()
{
	float a, b, c, d;
	printf("Введите A, B, C: \n");
	scanf("%f %f %f", &a, &b, &c);
	d = desk(a, b, c);
	return 0;
}