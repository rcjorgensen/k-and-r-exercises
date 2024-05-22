#include <stdio.h>

#define NCHARS	128

/* prints a histogram of the frequencies of different characters in the input */
int main()
{
	int c, i;
	int chars[NCHARS];
	
	while ((c = getchar()) != EOF) {
		++chars[c];
	}

	for (c = 32; c < NCHARS; ++c) {
		if (chars[c] > 0) {
			printf("%c:\t", c);
			for (i = 0; i < chars[c]; ++i) {
				printf("#");
			}
			printf("\n");
		}
	}

	return 0;
}
