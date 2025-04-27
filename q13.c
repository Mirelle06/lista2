#include <stdio.h>
#include <math.h>

int main(){
    
    float a, b, h;
    
    printf("digite um valor para A e B: ", a, b);
    scanf("%f %f", &a, &b);
    
    h = sqrt(a*a + b*b);
    
    printf("o valor da hipotenusa é: %f", h);
    scanf("%f", &h);
}