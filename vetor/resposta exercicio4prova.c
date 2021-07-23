#include <stdio.h>


int main (void){
	int vet[6];
	int i = 0;
	int rep = 0;
		for(i= 0; i <6; ++i){
		printf("Digite o elemento: \n");
		scanf("%d", &vet[i]);
}
for(i =0; i<6; ++i){
	rep = 0;
	for( int j=0; j < 6; ++j)
		if(vet[j]==vet[i])
		rep+=1;
		printf("%d ", rep);

	}
}
		 
	


