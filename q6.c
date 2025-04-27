#include <stdio.h>

int main() {
  
   float k, m;
   
   printf("digite uma velocidade em km/h: ");
   scanf("%f", &k);
   
   m = k/3.6;
   
   printf("velocidade em m/s: %f", m);
}