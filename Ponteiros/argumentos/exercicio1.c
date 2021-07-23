#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(int argc, char *argv[argc+1]) {
	setlocale( LC_ALL, "");
	if (argc < 2)
		printf("Passe um argumento ele sera invertido\n");
	else{
		int comprimento = strlen(argv[1]); //strlen nesse caso pega a qtd de caracteres no vetor, e esta armazenando em comprimento
		int i = comprimento - 1; // -1 para retirar o 0 terminador, fica um espacinho se nao tirar
		while ( i >=0) {
			printf("%c", argv[1][i]);// argv[1] linha [i] coluna
			--i;
		}
		printf("\n");
	}
	return 0;
}
		
