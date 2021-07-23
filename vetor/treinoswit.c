#include <stdio.h>
int main(void){
int i = 0;
double vetor[4];
int opcao = 0;
double maior = 0;
double menor = 0;

for(i = 0; i<4; i++){
	printf("DIGITE O SALARIO %d: ", i+1);
	scanf("%lf", &vetor[i]);
}

do{
    system("cls");
    
    for(i = 0; i<4; i++){
    printf("%g\n", vetor[i]);
}
	printf("DIGITE 1 PARA AUMENTAR O SALARIO MAIS ALTO EM 10%\n");	
	printf("DIGITE 2 PARA AUMENTAR O SALARIO MAIS BAIXO EM 20%\n");
    printf("DIGITE 3 PARA AUMENTAR TODOS OS SALARIOS EM 5%\n");
	printf("DIGITE 4 PARA SAIR DO PROGRAMA\n");	
	scanf("%d", &opcao);
			
	switch(opcao){
		case 1:
			maior = vetor[0];
			for(i= 0; i<4; i++){
				if(vetor[i] > maior)
					maior = vetor[i];
			}
			for(i= 0; i<4; i++){
				if(vetor[i] == maior)
					vetor[i] = vetor[i]*1.1;
				}
				printf("OPERACAO REALIZADA\n");
			break;
		case 2:
			menor = vetor[0];
			for(i= 0; i<4; i++){
				if(vetor[i] < menor)
					menor = vetor[i];
			}
			for(i= 0; i<4; i++){
				if(vetor[i] == menor)
					vetor[i] = vetor[i]*0.8;
				}
				printf("OPERACAO REALIZADA\n");
			break;
		case 3:
			for(i= 0; i<4; i++){
				vetor[i] = vetor[i]*1.05;
				printf("OPERACAO REALIZADA\n");
			break;
		case 4:
			break;
}
}
}while(opcao != 4);

for(i = 0; i<4; i++){
    printf("%g\n", vetor[i]);
}
}


