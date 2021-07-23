#include <stdio.h>

void carregar(double *v, int  tam){
  int i = 0;
  for(; i < tam; i++){
    printf("Digite um numero: ");
    scanf("%lf", &v[i]);
  }
}


void minmax(const double v[], int tam, double *min, double *max){
  int i = 0;
  *min = *max = v[i];

  for(; i < tam; i++){
    if(v[i] < *min){
      *min = v[i];
    }
    if(v[i] > *max){
      *max = v[i];
    }
  }
}



int main(void) {
    int tam = 0;
    double min, max;

    printf("Digite um valor para tam\n");
    scanf("%d", &tam);

    double v[tam];
    carregar(v, tam);
    minmax(v, tam, &min, &max);

    printf("\n min: %g - max: %g ", min,max);
  return 0;
}
