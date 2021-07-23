#include <stdio.h>
#define TAM 6


/*int main(void){
	double v[TAM];
	int i = 0;
	double media = 0;
	
	for(i = 0; i<TAM; i++){
		printf("Digite o elemento:\n");
		scanf("%lf", &v[i]);	
		media+=v[i];	
	}
	media/=5;
	for(i = 0; i<TAM; i++){
		if(v[i]>media){
		printf("%g ", v[i]);
		
		}	
	}
}*/

int main(void){
	int i = 0;
	int v[TAM];
	int j = 0;
	int qtd = 0;
	
	for(i = 0; i<TAM; i++){
		printf("Digite o elemento:\n");
		scanf("%d", &v[i]);	
	}
	for(i = 0; i<TAM; i++){
			if(v[i]==v[j]){
				qtd++;
				j++;
			}
			
		
		printf("%d ", qtd);	
}
}
