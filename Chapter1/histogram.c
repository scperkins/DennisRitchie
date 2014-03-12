#include <stdio.h>

/*Write a program to print a histogram of the lengths of words in its input. It is easiest to draw the histogram horizontally;
* a vertical orientation is more challenging.
*
*
*/
#define MAXWORDLEN 10
#define YES 1
#define NO 0

int main() {
	int c = EOF;
	int i, j;
	int inword;
	int wordOccur[MAXWORDLEN + 1];
	int numchar;

	for (i= 0; i < MAXWORDLEN; ++i) { //initialize all indexes of array to be zero
		wordOccur[i] = 0;
	}

	inword = YES;
	numchar = 0;
	while ((c = getchar()) != EOF){
		++numchar;
		if (c == ' ' || c == '\n' || c == '\t') {
			inword = NO;
			--numchar;
		}
		if (inword == NO) {
			if (numchar != 0 && numchar <= MAXWORDLEN)
				++wordOccur[numchar];
			
		inword = YES;
		numchar = 0;

		}
	}

	for (i = 1; i <= MAXWORDLEN; ++i){
		printf("|%2d| ", i);
		for (j = 0; j < wordOccur[i]; ++j){
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}