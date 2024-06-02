#include <stdio.h>

#define MAXLINE 1000	/* maximum input line length */
#define MINLINE 80		/* minimum length for an input line to be printed */

int getline(char line[], int maxline);

/* print all input lines that are longer than 80 characters */
int main()
{
	int len;				/* current line length */
	char line[MAXLINE];		/* current input line */

	while ((len = getline(line, MAXLINE)) > 0) if (len > MINLINE) printf("%slength: %d\n", line, len);

	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
		s[i] = c;
	}

	if (i == lim - 1) {
		s[i] = '\0';
		while ((c=getchar())!=EOF && c!='\n') {
			++i;
		}
	} else {
		if (c == '\n') {
			s[i] = c;
			++i;
		}

		s[i] = '\0';
	}
	return i;
}
