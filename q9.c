#include <stdio.h>

int main(){
    
    float pi = 3.141592;
    float g, r;
    
    printf("digite um numero qualquer em graus: ");
    scanf("%f", &g);
    
    r = g * pi/180;
    
    printf("valor em radianos: %f", r);
}