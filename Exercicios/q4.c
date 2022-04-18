/*trocar o valor da variaveis sem a auxiliar*/
#include <stdio.h>
int main()
{
  float a,b;
  
  printf("digite o valor da primeira variavel ");
  scanf("%f", &a);
  printf("digite o valor da segunda variavel ");
  scanf("%f", &b);
  printf("o valor de primeira variavel e %f e da segunda e %f \n", a, b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("Agora o valor da primeira variavel e %f e da segunda e %f", a, b);
}