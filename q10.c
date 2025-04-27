#include <stdio.h>

int main(){
    
    float premio = 780000;
    float primeiro = premio * 0.46;
    float segundo = premio* 0.32;
    float terceiro = premio * 0.22;
    
    printf("valor ganho pelo primeiro: %f\n", primeiro);
    scanf("%f", &primeiro);
    
    printf("valor ganho pelo segundo: %f\n", segundo);
    scanf("%f", &segundo);
    
    printf("valor ganho pelo terceiro: %f\n", terceiro);
    scanf("%f", &terceiro);
    
}