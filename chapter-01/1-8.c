#include <stdio.h>

void char_count()
{
	double nc;
	for (nc = 0; getchar() != '\n'; ++nc);
	printf("%.0f\n", nc);
}

void line_count()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}
		printf("%d\n", nl);
	}
}

int main()
{
	int c;
	int blanks, tabs, newlines;

	blanks = 0;
	tabs = 0;
	newlines = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++blanks;
		}
		else if (c == '\t') {
			++tabs;
		}
		else if (c == '\n') {
			++newlines;
		}
	}

	printf("blanks: %d\n", blanks);
	printf("tabs: %d\n", tabs);
	printf("newlines: %d\n", newlines);
}
