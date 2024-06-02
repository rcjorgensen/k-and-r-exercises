#include <stdio.h>

int fahr_to_cels(int fahr);

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
int main()
{
	int fahr;
	int lower, upper, step;

	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	while (fahr <= upper) {
		printf("%d\t%d\n", fahr, fahr_to_cels(fahr));
		fahr = fahr + step;
	}

	return 0;
}

/* convert Fahrenheit to Celsius */
int fahr_to_cels(int fahr)
{
	return 5 * (fahr-32) / 9;
}
