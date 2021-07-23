#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
	int numA = 0;
	int numB = 0;
	int resultado = 0;
	
	if(argc < 3)
	printf("Multiplique 2 valores digitados na linha de comando\n ");
	else{
	numA = strtol(argv[1], 0, 10);
	numB = strtol(argv[2], 0, 10);
	
	resultado = numA*numB;
	
	printf("%d x %d = %d\n",numA, numB, resultado);
}
}
