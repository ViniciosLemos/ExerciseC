#include<stdio.h>
#define TAM(80+1)

int main(void){
	int n = 0;
	char string[TAM];
	
	printf("Digite N: ");
	scanf("%d", &n);
	while(1){
		printf("Digite uma string: ");
		fflush(stdin);
		fgest(str, TAM, stdin);
		for (int i = 0; i <n; ++i)
			printf("%c", string[i]);
		printf("\n")
	}
	
	}
}
