#include <stdio.h>

#define IN	1	/* inside a word */
#define OUT	0	/* outside a word */

#define MAX_LENGTH	20	/* max length representable in the histogram */

/* print a histogram of the lengths of words in the input */
main()
{
	int c, i, j, state, length;
	int words[MAX_LENGTH + 1];

	state = OUT;
	length = 0;
	
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\n' && c != '\t') {
			state = IN;
			++length;
		} else if (state == IN) {
			if (length > MAX_LENGTH) {
				++words[0];
			} else {
				++words[length];
			}

			length = 0;

			state = OUT;
		}
	}

	for (i = 1; i <= MAX_LENGTH; ++i) {
		printf("%d:\t", i);
		for (j = 0; j < words[i]; ++j) {
			printf("#");
		}
		printf("\n");
	}

	printf(">%d:\t", MAX_LENGTH);
	for (j = 0; j < words[0]; ++j) {
		printf("#");
	}
	printf("\n");
}
