#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc,char *argv[]){

	double numA = 0;
	double numB = 0;
	double resultado = 0;
	 
		if(argc < 3)
			printf("Passe 2 argumentos e obtenha o primeiro elevado pelo segundo\n");
		else{
			numA = strtod(argv[1], 0);
			numB = strtod(argv[2], 0);
		
			resultado = pow(numA, numB);
			
		printf("%g elevado a %g = %g",numA,numB, resultado);
	}
	
	}
	

