#include <stdio.h>

/* print Celsius-Fahrenheit table
for celsius = -20, 0, 20, ..., 160; floating-point version */
int main()
{
	float fahr, celsius;
	float lower, upper, step;
	lower = -20; /* lower limit of temperatuire scale */
	upper = 160; /* upper limit */
	step = 20; /* step size */
	celsius = lower;
	printf("Celsius ");
	printf("Fahrenheit\n");
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%7.0f %10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}
