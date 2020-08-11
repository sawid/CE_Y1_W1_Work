#include <stdio.h>
#include <math.h>

float power(float);

float power(float w)
{
	return w * w;
}

int main() {
	float x, y;
	printf("Enter the first length : ");
	scanf_s("%f", &x);
	printf("Enter the second length : ");
	scanf_s("%f", &y);
	if (x <= 0 || y <= 0)
	{
		printf("Error!");
	}
	else
	{
		printf("The Answer is %f", sqrt(power(x) + power(y)) );
	}
	
}

