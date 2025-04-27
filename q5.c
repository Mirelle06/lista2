#include <stdio.h>

int main() {
  
   int x, y;
   
   printf("digite sua idade e o ano atual: ");
   scanf("%d %d", &x, &y);
   
   printf("ano de nascença: %d", y-x);
}