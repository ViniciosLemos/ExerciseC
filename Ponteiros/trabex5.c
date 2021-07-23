/*Faça um programa utilizando ponteiro que identifique um valor que mais se repete
dentro do vetor de 100 posições. Faça o preenchimento do vetor de maneira
automática. Caso não exista dois valores iguais, escreva na tela que todos os
números são diferentes.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void){
	int i =0;
	int vet[100];
	int vetqtd[100];
	int maiorx = 0;
	int contador =0;
	int j = i;
	
	srand(time(NULL));
	 
	for(i = 0; i <100; i++){
		vet[i] = rand() % 100;
		vetqtd[i] = 1;
	}
	int *ponteiroVet = &vet;
	int *ponteiroVet2 = &vet;
	
	for(i = 0; i < 100; i++){
	
		for(; j >= 0; j--){
			if(*ponteiroVet == *ponteiroVet2){
					
					vetqtd[i] += 1;
				}	
				ponteiroVet2++;	
		}
		
		for (; j >= 0; j--){
		ponteiroVet2 --;
		
	}
	ponteiroVet++;
	}
	for(; i > 0; i--){
		ponteiroVet--;
	}
	for(i = 0; i < 100 ; i++){
		
		if(vetqtd[i] > maiorx){
			maiorx = vetqtd[i];
			contador = i;
		}
		else if(vetqtd[i] == maiorx){
			contador =102;
		
		}
		else{
			if(maiorx == 0){
			contador = 103;
			}
		}
	}
		if (contador == 102){
		printf("Entre dois numeros ou mais ocorreu um empate");
		}
		else if(contador == 103){
		printf("Os numeros sao diferentes");
		}
		else{
		printf("Vezes que repetiu: %d -- inicial: %d --Numero: %d", maiorx-1, contador,vet[contador]);
		
	}
	
}
