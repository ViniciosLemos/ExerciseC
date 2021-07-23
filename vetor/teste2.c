#include <stdio.h>

int main(void){
	int i = 0;
	printf("Digite o numero de linhas: ");
	scanf("%d", &i);
	int c = i;
	
	int j = 0;
	printf("Digite o numero de colunas: ");
	scanf("%d", &j);
	int d = j;
	
	int matriz [i][j];
	
	for(i = 0; i<c; i++){
		for(j=0; j<d; j++){
			printf("Informe o valor na posicao linha [%d], coluna [%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);	
		}
	}
	for(i = 0; i<c; i++){
		for(j=0; j<d; j++){
			printf("%d", matriz[i][j]);
				
		}	
		printf("\n");
	}
	return 0;
}
