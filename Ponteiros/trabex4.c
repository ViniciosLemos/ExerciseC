/*Fa�a um programa que modifique as vogais de uma frase. O programa deve ler uma
frase (max. 100 caracteres) e armazen�-la num vetor. Imprimir a frase lida trocando
as vogais, isto �, trocar 'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'.
Usar um procedimento para realizar a troca e outro para realizar a impress�o da
frase trocada. A fun��o deve ter como par�metro um ponteiro char referente ao
vetor. Dica: Use a fun��o fgets() da biblioteca string.h para realizar a leitura da frase.
Use o switch para realizar as trocas. S� considere as letras min�sculas*/

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
