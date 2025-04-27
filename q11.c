#include <stdio.h>

int main(){
    
    float raio, A;
    const float pi = 3.141592;
    
    printf("digite o valor do raio: ");
    scanf("%f", &raio);
    
    A = pi * raio*raio;
    
    printf("valor da area do circulo: %f", A);
    scanf("%f", &A);
}