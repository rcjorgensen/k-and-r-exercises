#include <stdio.h>

#define MAXBUFFER	1000

int main()
{
	int p, i, c;
	char buffer[MAXBUFFER];

	i = 0;
	p = 0;

	c = getchar();
	while (c != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			if (i > 0) {
				printf("%s", buffer);
				i = 0;
			}

			putchar(c);
			p = 1;
			c = getchar();
		} else if (c == '\n') {
			i = 0; /* reset buffer without writing it */

			if (p == 1) { /* only write the newline if something else was written since last newline */
				putchar(c);
			}

			p = 0; /* reset the variable keeping track of whether or not something was written */
			c = getchar();
		} else {
			for (i = 0; i < MAXBUFFER - 1 && (c == ' ' || c == '\t'); ++i) {
				buffer[i] = c;
				c = getchar();
			}

			buffer[i] = '\0';
		}
	}

	return 0;
}
