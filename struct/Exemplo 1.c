#include <stdio.h>

struct Pessoa{
  char nome[50];
  int idade;
  
};

struct Pessoa receberDados(){
  struct Pessoa pes;

  printf("Digite o nome: ");
  scanf("%s", pes.nome);

  printf("Digite a idade: ");
  scanf("%d", &pes.idade);

  return pes;
}

void exibir(struct Pessoa p){
  printf("\nNome: %s \nIdade:%d", p.nome, p.idade);
}

int main(void) {
  
  //declarar uma variável do tipo Pessoa
  struct Pessoa p;

  /*printf("Digite o nome: ");
  scanf("%s", p.nome);

  printf("Digite a idade: ");
  scanf("%d", &p.idade);

  //exibir os dados de pessoa
  printf("\nNome: %s \nIdade:%d", p.nome, p.idade);*/

  //chamar a função para receber os dados
  p = receberDados();

  //chamar o procedimento para exibir os dados
  exibir(p);

  //vetor do tipo Pessoa
  struct Pessoa pessoas[5];

  int i = 0;
  for(; i < 5; i++){
    //receber dados
    pessoas[i] = receberDados();
  }

  //exibir os dados do vetor
  for(i = 0; i < 5; i++){
    exibir(pessoas[i]);
  }

  return 0;
}
