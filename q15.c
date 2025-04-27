#include <stdio.h>
#include <math.h>

   int main(){
    
    int x, unidade, dezena, centena;
    
        printf("digite um numero de tres digitos: ");
        scanf("%d", &x);
        
        unidade = x % 10;
        dezena = (x % 100) / 10;
        centena = x / 100;
        
        printf("%d", unidade);
        printf("%d", dezena);
        printf("%d", centena);
    
}