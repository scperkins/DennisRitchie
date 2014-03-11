#include <stdio.h>

/* Convert Celsius to Fahrenheit */

void main() {

	int lower,upper,step;
	float fahr, celsius;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("Celsius \tFahrenheit\n");
	while (celsius <= upper){
		fahr = (((celsius * 9) / 5) + 32);

		printf("%4.0f \t\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}