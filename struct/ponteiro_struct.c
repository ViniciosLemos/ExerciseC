#include <stdio.h>
#include <string.h>
#define TAMANHO 3

typedef struct{
  char nome[50];
  int idade;
}Pessoa;

int main(void) {
  
  Pessoa pes, pessoas[TAMANHO];
  Pessoa * ptrPes;

  strcpy(pes.nome, "IGOR");
  pes.idade = 20;

  printf("\nNome: %s - Idade: %d ", pes.nome, pes.idade);

  ptrPes = &pes;

  printf("\nNome: %s - Idade: %d ", (*ptrPes).nome, (*ptrPes).idade);

  strcpy(ptrPes->nome, "CALEBE");
  ptrPes->idade = 21;

  printf("\nNome: %s - Idade: %d ", ptrPes->nome, ptrPes->idade);

  int i = 0;

  ptrPes = pessoas;

  for(; i < TAMANHO; i++){
    printf("Digite o nome: ");
    scanf("%s", (ptrPes+i)->nome);
    printf("Digite a idade: ");
    scanf("%d", &(ptrPes+i)->idade);
  }

  for(i = 0; i < TAMANHO; i++){
    printf("\n\nNome: %s - Idade: %d ", (ptrPes + i)->nome, (ptrPes + i)->idade);
    printf("\nNome: %s - Idade: %d ", (*(ptrPes+i)).nome, (*(ptrPes+i)).idade);
  }


  return 0;
}
