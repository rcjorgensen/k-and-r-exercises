#include <stdio.h>

/* Copy input to output, replacing each tab by \t, each backspace by \b and each backslash by \\ */
int main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c != '\t' && c != '\b' && c != '\\') {
			putchar(c);
		} else {
			putchar('\\');
			if (c == '\t') {
				putchar('t');
			} else if (c == '\b') {
				putchar('b');
			} else {
				putchar('\\');
			}
		}
	}

	return 0;
}
