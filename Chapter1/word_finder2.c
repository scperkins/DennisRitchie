#include <stdio.h>

// Prints the words from user input, one per line
#define YES 1
#define NO 0

main()
{
	int c, inspace;

	inspace = 0;
	while ((c = getchar()) != EOF) 
	{ //EOF is Ctrl + D on Linux and OS X
		
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (inspace == 0)
			{
				inspace = 1;
				putchar('\n');
			}
		}
		else{
			inspace = 0;
			putchar(c);
		}	

	}
	return 0;
}