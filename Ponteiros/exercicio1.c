#include <stdio.h>

double Media(int v[], int tam){
  double soma = 0;
  int i = 0;
  for(; i < 3; i++){
    soma += v[i];
  }

  return soma/tam;
}
	int main(void){
		int tam = 3;
		int i = 0;
		int vetor[] = {2,2,2};
		
		
		printf("mediaa: %g", Media(vetor, tam));
		}	
	
	

