#include <stdio.h>

/* Count blanks, tabs and newlines */
int main()
{
	int n, c;

	n = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			++n;
		}
	}

	printf("%d\n", n);

	return 0;
}
