#include <stdio.h>

int main()
{
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar(' ');
			while (c == ' ') {
				c = getchar();
			}
		}
		putchar(c);
	}
}
