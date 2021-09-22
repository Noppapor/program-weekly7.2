#include<stdio.h>
int main()
{
	float a, b, c, d, e, f, g, h, i, j, average;
	scanf_s("%f %f %f %f %f %f %f %f %f %f", &a ,&b ,&c ,&d ,&e ,&f ,&g ,&h ,&i ,&j);
	average = (a + b + c + d + e + f + g + h + i + j) / 10;
	printf("%f", average);
}