/*Crie um programa que contenha um vetor de inteiros contendo 5 elementos. Crie
um procedimento que receba o vetor como parâmetro e utilizando apenas
aritmética de ponteiros (não utilizar a notação de índice no vetor [i]), receba
valores do teclado. Crie outro procedimento para exibir os valores do vetor.*/
#include <stdio.h>
#include <stdlib.h>

void mostra(int *v){
	int j =0;
	for(j= 0; j<5; j++){
	
	printf("%d ", *v);
	v++;
}
}


void recebe(int *v){
	int i = 0;
	for(i = 0; i <5; i++){
		printf("Digite um numero: ");
		scanf("%d", &*v);
		v++;	
	}
} 

int main(void){
	int vector[5];
	
	recebe(&vector);
	mostra(&vector);
	
	
}
	
