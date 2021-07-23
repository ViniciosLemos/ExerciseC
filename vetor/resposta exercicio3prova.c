#include <stdio.h>

int main (void){
	double vet[5];
	int i = 0;
	double media = 0;
	
	for(i = 0 ; i <5; i++){
		printf("Digite o elemento: \n");
		scanf("%lf", &vet[i]);
		media+= vet[i];
	} 
	media/=5;
	for(i = 0; i <5; i ++){
		if(vet[i]> media){
			printf("%g ", vet[i]);
	}
	}
	
}

