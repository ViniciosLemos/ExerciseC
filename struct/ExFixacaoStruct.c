#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
  int matricula;
  char nome[50];
  double n1, n2, n3;
}Aluno;

void receberDados(Aluno *PtrAlunos){
  int i = 0;
  for(; i < TAM; i++){
    printf("\nDigite o número de matrícula do aluno: ");
    scanf("%d", &(PtrAlunos+i)->matricula);
    //printf("NUMERO TESTE : %d\n", (PtrAlunos+i)->matricula);

    printf("Digite o nome do aluno: ");
    scanf(" %s", (PtrAlunos+i)->nome);

    
	printf("Digite as notas separadas por |: ");
    scanf("%lf|%lf|%lf", &(PtrAlunos+i)->n1,&(PtrAlunos+i)->n2, &(PtrAlunos+i)->n3);// forma diferente de armazenar varios valores 
    }
}

Aluno maiorNotaPrimeiraProva(Aluno *PtrAlunos){
  int i = 0;
  Aluno alMaiorNota = *(PtrAlunos+i);// ele ta armazenando todos os dados da primeira ficha em alMaiorNota
  
  for(i = 1; i < TAM; i++){
    if((PtrAlunos+i)->n1 > alMaiorNota.n1){
      alMaiorNota = *(PtrAlunos+i);// todos os dados em alMaiorNota
    }
  }

  return alMaiorNota;
}

Aluno maiorMedia(Aluno *PtrAlunos){
  int i = 0;
  Aluno alMaiorMedia = *(PtrAlunos+i);
  double media = 0, maiorMedia = ((PtrAlunos+i)->n1 +(PtrAlunos+i)->n2 + (PtrAlunos+i)->n3)/3;
  
  for(i = 1; i < TAM; i++){
    media = ((PtrAlunos+i)->n1 +(PtrAlunos+i)->n2 + (PtrAlunos+i)->n3)/3;
    if( media > maiorMedia){
      alMaiorMedia = *(PtrAlunos+i);
      maiorMedia = media;// caminha o vetor comparando sempre com o anterior
    }
  }

  return alMaiorMedia;
}

Aluno menorMedia(Aluno *PtrAlunos){
  int i = 0;
  Aluno alMenorMedia = *(PtrAlunos+i);
  double media = 0, menorMedia = ((PtrAlunos+i)->n1 +(PtrAlunos+i)->n2 + (PtrAlunos+i)->n3)/3;
  
  for(i = 1; i < TAM; i++){
    media = ((PtrAlunos+i)->n1 +(PtrAlunos+i)->n2 + (PtrAlunos+i)->n3)/3;
    if( media < menorMedia){
      alMenorMedia = *(PtrAlunos+i);
      menorMedia = media;
    }
  }

  return alMenorMedia;
}

void verificarStatus(Aluno *PtrAlunos){
  int i = 0;
  for(; i < TAM; i++){
    double media = ((PtrAlunos+i)->n1 + (PtrAlunos+i)->n2 + (PtrAlunos+i)->n3)/3;
    if(media >= 6){
      printf("Aluno %s - RA: %d - APROVADO\n", (PtrAlunos+i)->nome, (PtrAlunos+i)->matricula);
    }else{
      printf("Aluno %s - RA: %d - REPROVADO\n", (PtrAlunos+i)->nome, (PtrAlunos+i)->matricula);
    }
  }
}

int main(void) {
  int opc;
  Aluno alunos[TAM], aluno;
  Aluno *PtrAlunos;
  PtrAlunos = alunos; 	
  do{

    printf("\n\nDigite 1 - Cadastrar alunos\nDigite 2 - Verificar a maior nota na primeira prova\nDigite 3 - Verificar o aluno com a maior média geral\nDigite 4 - Verificar o aluno com a menor média geral\nDigite 5 - Verificar status\nDigite 6 - Sair\n");
    scanf("%d", &opc);

    switch(opc){
      case 1: 
        receberDados(PtrAlunos);// void retorna dados para o main q podem ser usados dps
        
        break;
      case 2:
        aluno = maiorNotaPrimeiraProva(PtrAlunos);// colou todos os valores em "aluno"
        printf("\nO aluno com a maior nota da primeira prova foi: %s",aluno.nome);
        break;
      case 3:
        aluno = maiorMedia(PtrAlunos);
        printf("\nO aluno com a maior média geral foi: %s",aluno.nome);
        break;
      case 4:
        aluno = menorMedia(PtrAlunos);
        printf("\nO aluno com a menor média geral: %s",aluno.nome);
        break;
      case 5:
        printf("\nListagem de alunos\n");
        verificarStatus(PtrAlunos);
        break;
      case 6:
        printf("\nObrigado!");
        break;
      default:
        printf("Opção não encontrada!");
        break;
    }
  }while(opc != 6);


  
}


