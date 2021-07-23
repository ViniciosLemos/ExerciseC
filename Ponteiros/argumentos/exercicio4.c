#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]){
	double a = 0;
	double b = 0;
	double c = 0;
	double x1 = 0;
	double x2 = 0;
	int delta = 0;
	if(argc <4)
		printf("Digite 3 valores para o calculo da equação do 2 grau: ");
	else{
		a = strtod(argv[1], 0);
		b = strtod(argv[2], 0);		
		c = strtod(argv[3], 0);
		
		delta = b*b - 4 *a* c;
		if(delta>=0){
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			
			printf("x1 = %g e x2 = %g",x1,x2);// testei com os paramentros 500 900 1000 e o programa nao retornou nada	
	}
	}
	

}
