/*Crie uma fun��o que receba dois vetores de inteiros, do mesmo tamanho.
 O primeiro
vetor est� preenchido e o segundo est� vazio.
 A fun��o deve armazenar no segundo
vetor todos os inteiros pares que vieram no primeiro, 
e retornar o n�mero de pares
armazenado no vetor. Teste com vetores variados que cubram v�rios casos.*/ 
 
#include <stdio.h>
#include <stdlib.h>

void par(int v1[], int v2[]){
	int i =0;				
	
	for(i = 0; i < 4; i++){
		if((*v1 % 2) ==0 ){
			*v2 = *v1;	
		}else{
			*v2=0;
		}
		printf("%d ", *v2);
		v1++;
		v2++;
	}	
}

int main(void){
	int vetor1[4] = {5,3,1,13};
	int vetor2[4] = {0,0,0,0};
	
	par(vetor1, vetor2);	
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
