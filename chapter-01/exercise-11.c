#include <stdio.h>

#define IN  1
#define OUT 0

void count(const char* str)
{
	int c, nc, nw, nl, state;

	state = OUT;
	nc = nw = nl = 0;

	while ((c = str[nc]) != '\0') {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}

int main()
{
	count("");								/* no input: 					0 0  0  */
	count("\n\n\n\n");						/* only newlines: 				4 0  4  */
	count(" \t \n\t   \t");					/* only blanks/tabs/newlines: 	1 0  9  */
	count("test\ntest\ntest\ntest\n");		/* no blanks or tabs: 			4 4 20  */
	count("test  \t  ");					/* word at beginning: 			0 1  9  */
	count("  \t  test");					/* word after some blanks: 		0 1  9  */
}
