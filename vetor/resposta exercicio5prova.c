#include <stdio.h>

#define TAM	20
int main (void){
	int vet[TAM];
	int i = 0;
	int j = 0;
	int lido = 0;
	int n =4;
	int p = 0;
	int soma = 0;
	int maior = 0;
	int imaior = 0;
	while(i<TAM){
		printf("Digite um numero: \n");
		scanf("%d", &lido);
		if(lido==999)
			break;
			vet[i] = lido;
			i+=1;
	}
	p = i;
	if(p <= n){
		imaior = 0;
		maior = 0;
		for(i = 0; i<p; ++i)
			maior+=vet[i];
	}
	else{
		maior = 0;
		for(i=0; i<n;++i)
			maior+= vet[i];
		imaior = 0;
		for(i = 1; i<=p-n; ++i){
			soma = 0;
			for(j=i; j< i+n; ++j);
			soma+=vet[j];
			if(soma>maior){
				maior = soma;
				imaior=1;
				
			}
		}
	}
	printf("Soma =%d inicio=%d\n", maior, imaior);
	}
	
	
	
	

