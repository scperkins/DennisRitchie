#include <stdio.h>

/* Exercise 1-8. Write a program to replace each tab by the three-character sequence  >, backspace, -, which prints <character>
, and each backspace by the similar sequence <reverse of said character. This makes tabs and backspaces visble
*/

int main() {
	int c, d;

	while ((c = getchar()) != EOF){
		d = 0;
		if (c == '\\') {
			putchar('\\');
			putchar('\\');
			d = 1;
		}
		if (c == '\t') {
			putchar('\\');
			putchar('\t');
			d = 1;
		}
		if (c == '\b') {
			putchar('\\');
			putchar('\b');
			d = 1;
		}
		if (d == 0) {
			putchar(c);
		}
	}
}