#include <stdio.h>
#include <math.h>

   int main(){
    
    char x;
    
    printf("digite uma letra maiuscula: ");
    scanf("%c", &x);
    
    printf("Letra minuscula: %c\n", x + 32);
}