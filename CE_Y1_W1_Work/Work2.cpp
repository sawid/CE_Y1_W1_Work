#include <stdio.h>
#include <math.h>

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
		printf("The Answer is %f", sqrt(pow(x, 2) + pow(y, 2)));
	}
	
}