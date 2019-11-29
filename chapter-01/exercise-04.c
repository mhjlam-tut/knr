#include <stdio.h>

float c2f(float celsius)
{
	return (double)celsius * 1.8 + 32;
}

int main()
{
	float celsius;
	int lower, upper, step;

	lower = -20;
	upper = 40;
	step = 5;

	celsius = lower;

	printf("  C |      F \n");
	printf("-------------\n");
	while (celsius <= upper) {
		printf("%3.0f | %6.1f\n", celsius, c2f(celsius));
		celsius = celsius + step;
	}
}
