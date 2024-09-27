// calc_main.c
#include <stdio.h>
#include "calc.h"

int main(void)
{
	double x = 2,
		y = 0,
		result = 0;

	// 더하기
	result = sum(x, y);
	printf("x: %.1f + y: %.1f  = %.1f", x, y, result);
	printf("\n");

	//빼기
	result = sub(x, y);
	printf("x: %.1f - y: %.1f = %.1f", x, y, result);
	printf("\n");
	//곱하기
	result = mul(x, y);
	printf("x: %.1f * y: %.1f = %.1f", x, y, result);
	printf("\n");
	//나누기
	result = div(x, y);
	printf("x: %.1f / y: %.1f = %.6f", x, y, result);
	printf("\n");
	//나머지
	result = rem(x, y);
	printf("x: %d %% y: %d = %d",
		(int)x, (int)y, (int)result);
	printf("\n");

	//추가 부분
	printf("x: %.1f ^ y: %.1f = %.1f\n", x, y, power(x, y));
	printf("sqrt of x: %.1f = %.1f\n", x, squareRoot(x));
	printf("area of y: %.1f = %.1f\n", y, areaOfCircle(y));
	printf("circ of y: %.1f = %.1f\n", y, circumferenceOfCircle(y));

	return 0;
}