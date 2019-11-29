#include <stdio.h>

float f2c(float fahr)
{
	return 1.8 * (fahr - 32);
}

int main()
{
	float fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("  F |      C\n");
	printf("------------\n");
	while (fahr <= upper) {
		printf("%3.0f | %6.1f\n", fahr, f2c(fahr));
		fahr = fahr + step;
	}
}
