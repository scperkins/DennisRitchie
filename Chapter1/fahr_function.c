#include <stdio.h>

/* Rewrite the temperature conversion program from section 1.2 to use a function conversion*/

float convert(float fahr) {
		
	float celsius;
	celsius = (5.0/9.0) * (fahr - 32.0);
	return celsius;
}

main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahrenheit \tCelsius\n");
	while (fahr <= upper){
		celsius = convert(fahr);
		printf("%4.0f \t\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;	

	}
	return 0;
}
 
