#include <stdio.h>

int main() {
  
  float cotacao, real, dolar;
  
  printf("valor em reais: ");
  scanf("%f", &real);
  
  printf("cotacao do dolar: ");
  scanf("%f", &cotacao);
  
  dolar = real/cotacao;
  
  printf("valor do numero em reais em dolar: %f", dolar);
}