#include <stdio.h>

#define MAXLINE		1000	/* maximum input length */

void reverse(char s[], int len);
int getline(char line[], int maxline);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		reverse(line, len);
		printf("%s\n", line);
	}

	return 0;
}

/* reverse: reverse a character string */
void reverse(char s[], int len)
{
	int l, u;
	char t;

	for (l = 0, u = len - 1; l < u; ++l, --u) {
		t = s[l];
		s[l] = s[u];
		s[u] = t;
	}
}

/* getline: read a line into s, return length */
int getline(char s[],int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}

	s[i] = '\0';

	return i;
}
