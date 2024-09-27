// calc_main.c
#include <stdio.h>
#include "calc.h"

int main(void)
{
	double x = 2,
		y = 0,
		result = 0;

	// ���ϱ�
	result = sum(x, y);
	printf("x: %.1f + y: %.1f  = %.1f", x, y, result);
	printf("\n");

	//����
	result = sub(x, y);
	printf("x: %.1f - y: %.1f = %.1f", x, y, result);
	printf("\n");
	//���ϱ�
	result = mul(x, y);
	printf("x: %.1f * y: %.1f = %.1f", x, y, result);
	printf("\n");
	//������
	result = div(x, y);
	printf("x: %.1f / y: %.1f = %.6f", x, y, result);
	printf("\n");
	//������
	result = rem(x, y);
	printf("x: %d %% y: %d = %d",
		(int)x, (int)y, (int)result);
	printf("\n");

	//�߰� �κ�
	printf("x: %.1f ^ y: %.1f = %.1f\n", x, y, power(x, y));
	printf("sqrt of x: %.1f = %.1f\n", x, squareRoot(x));
	printf("area of y: %.1f = %.1f\n", y, areaOfCircle(y));
	printf("circ of y: %.1f = %.1f\n", y, circumferenceOfCircle(y));

	return 0;
}