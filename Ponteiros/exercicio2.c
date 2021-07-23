#include <stdio.h>

void carregar(int v[], int  n){
  int i = 0;
  for(; i < n; i++){
    printf("digite um numero: ");
    scanf("%d", &v[i]);
  }
}

int main(void) {
  int n = 0;
  printf("Digite o valor de n\n");
  scanf("%d", &n);

  int v[n], i = 0;

  carregar(v, n);

  for(; i < n; i++){
    printf("\n %d", v[i]);
  }
  return 0;
}
