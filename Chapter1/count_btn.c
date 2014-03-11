#include <stdio.h>

/* Write a program to count blanks, tabs and, newlines*/
void main(){

	int blanks, tabs, spaces;
	int c;

	blanks = tabs = spaces = 0;
	while((c = getchar()) != EOF) 
 
		if (c == ' ' || c == '\n' || c == '\t') 
			blanks++;
			tabs++;
			spaces++;

		
		printf("%d %d %d\n", blanks, tabs, spaces);
	
	
}