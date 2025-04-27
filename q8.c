#include <stdio.h>

int main() {
  
    float x, f;
    
    printf("digite um valor em grau celsius: ");
    scanf("%f", &x);
    
    f =  x * (9.0/5.0) + 32;
    
    printf("valor em Fahrenheit: %f", f);
}