#include <stdio.h>


double fahr;

main(){

	for(fahr=0; fahr<=300; fahr = fahr + 20){
		printf("%f4d %6.1f\n",fahr, (5.0/9.0)*(fahr-32.0));
	}

}