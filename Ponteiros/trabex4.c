/*Faça um programa que modifique as vogais de uma frase. O programa deve ler uma
frase (max. 100 caracteres) e armazená-la num vetor. Imprimir a frase lida trocando
as vogais, isto é, trocar 'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'.
Usar um procedimento para realizar a troca e outro para realizar a impressão da
frase trocada. A função deve ter como parâmetro um ponteiro char referente ao
vetor. Dica: Use a função fgets() da biblioteca string.h para realizar a leitura da frase.
Use o switch para realizar as trocas. Só considere as letras minúsculas*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (){

	char string[5];

	printf ("Digite uma frase: ");
	fflush (stdin);
	fgets (string, 5, stdin);


	char *pointer = &string; 
	
	int i = 0; 
	
	for (i = 0 ; *pointer; i++){
	
		switch (tolower(*pointer)){
		
		  case 'a':
		  	*pointer = 'u';
		  break;
		
		  case 'e':
		  	*pointer = 'o';
		  break;
		
		  case 'i':
		 	*pointer = 'u';
		  break;
		
		  case 'o':
		  	*pointer = 'a';
		  break;
		
		  case 'u':
		  	*pointer = 'e';
		  break;
		
			default:
			break; 
		}
		
			pointer++;
		}
		for (; i > 0; i--){
		
			pointer--;
		
		} for (i = 0; *pointer; i++){
		  	printf( "%c", *pointer);
		 	pointer++;
		}
		}
