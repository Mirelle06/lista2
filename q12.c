#include <stdio.h>

int main(){
    
    float v, altura, raio;
    const float pi = 3.141592;
    
    printf("digite o valor da altura e o raio de um cilindro circular: ", altura, raio);
    scanf("%f %f", &altura, &raio);
    
    v = pi * raio*raio * altura;
    
    printf("volume do cilindro circular: %f", v);
    scanf("%f", &v);
}