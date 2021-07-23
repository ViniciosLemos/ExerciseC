/*Permita ao usuário entrar com os dados de 5 alunos. 
Encontre o aluno com maior nota da primeira prova. 
Encontre o aluno com maior média (média aritmética das 3 notas). 
Encontre o aluno com menor média geral (média aritmética das 3 notas).
Para cada aluno diga se ele foi aprovado ou reprovado, considerando que a média deve ser maior ou igual a 6 para a aprovação*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno{
	int matricula;
	char Nome[50];
	double Nota1;
	double Nota2;
	double Nota3; 
};

struct aluno armazena(struct aluno *Ptr){
	struct aluno arma;
	Ptr = &arma;
	printf("Qual o numero da matricula:");
	scanf("%d", &Ptr->matricula);	
	
	printf("Qual o nome do aluno:");
  	scanf("%s", Ptr->Nome);

	printf("Qual foi a primeira nota:");
	scanf("%lf", &Ptr->Nota1);
	
	printf("Qual foi a segunda nota:");
	scanf("%lf", &Ptr->Nota2);
	
	printf("Qual foi a terceira nota: ");
	scanf("%lf", &Ptr->Nota3);
	
	return *Ptr;
  
}

/*void maiornota1(struct aluno alunos[]){

	int j = 0;
	double maiorr=0;
	struct aluno alunoMaiorNota = alunos[0]; 

	for(j=1; j<3; j++){	
		if(alunos[j].Nota1>alunoMaiorNota.Nota1){
			alunoMaiorNota = alunos[j];
			
		}
		
	}
	printf("O aluno com a maior nota: %s com %f de nota", alunoMaiorNota.Nome,alunoMaiorNota.Nota1);
}
void mediaMaior(struct aluno alunos[]){
	int i = 0;
	struct aluno alunoMaiorMedia = alunos[i];
  	double media = 0, maiorMedia = (alunos[i].Nota1 +alunos[i].Nota2 + alunos[i].Nota3)/3;
  
  for(i = 1; i < 3; i++){
    media = (alunos[i].Nota1 +alunos[i].Nota2 + alunos[i].Nota3)/3;
    	if(media > maiorMedia){
      		alunoMaiorMedia = alunos[i];
     		maiorMedia = media;// caminha o vetor comparando sempre com o anterior
    }
  }
	printf("Aluno com a maior media: %s", alunoMaiorMedia.Nome);
}
void mediaMenor(struct aluno alunos[]){
	int i = 0;
	double mediaMenorr = 0;
	double media2 = 0;
	struct aluno alunoMenorMedia = alunos[0];
	mediaMenorr = (alunos[0].Nota1+alunos[0].Nota2+alunos[0].Nota3)/3;
	
    for(i=1; i<3;i++){
    	media2 = (alunos[i].Nota1+alunos[i].Nota2+alunos[i].Nota3)/3;
    	if(media2<mediaMenorr){
    		alunoMenorMedia = alunos[i];
			mediaMenorr = media2;
	}
    
	 
}
printf("Aluno com a menor media: %s", alunoMenorMedia.Nome);
}

void conclusao(struct aluno alunos[]){
	int i = 0;
	double media[3];
	
	for(i = 0; i<3; i++){
		media[i] = (alunos[i].Nota1+alunos[i].Nota2+alunos[i].Nota3)/3;
			if(media[i]>=6){
				printf("O aluno(a): %s foi aprovado(a)\n", alunos[i].Nome);	
			}else{
				printf("O aluno(a): %s foi reprovado(a)\n", alunos[i].Nome);
				
				
			} 
    
	
	}
}
*/	
 




int main ( void){
	int i = 0;
	struct aluno alunos;
	struct aluno *Ptr;
	struct aluno classe[3];
	
	Ptr = alunos; 
	
	for(i=0;i<3; i++){
		classe[i] = armazena(Ptr);
		printf("\n");	
	}
		
	maiornota1(alunos);
	printf("\n");
	mediaMaior(alunos); 
	printf("\n");
	mediaMenor(alunos);
	printf("\n");
	conclusao(alunos);
  	printf("\n");
}




