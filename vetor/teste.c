#include <stdio.h>



int main (void){
	double matriz [4][4];
	int i = 0;
	int j = 0;
	int maior = 0;
	int menor = 0;
	double media = 0;
	
	
	for(i = 0; i<4; i++){
		for(j=0; j<4; j++){
			printf("Informe o valor na posicao linha %d, coluna %d: ", i+1, j+1);
			scanf("%lf", &matriz[i][j]);	
			media +=matriz[i][j]; 	
		}
	}
	maior = matriz[0][0];
	menor = matriz[0][0];
	for(i = 0; i<4; i++){
		for(j=0; j<4; j++){
			if(matriz[i][j]> maior)
			maior = matriz[i][j]; 	
			
			if(matriz[i][j] < menor)
			menor = matriz[i][j];
}
}
media/=16;

printf("O maior: %d\n O menor: %d\n, A media: %g\n", maior, menor, media);

}

