/*inverter valores das variaveis*/
#include <stdio.h>
int main()
{
  float valor1, valor2, aux1, aux2;
  printf("informe o primeiro valor");
  scanf("%f", &valor1);
  printf("informe o segundo valor");
  scanf("%f", &valor2);
  printf("o primeiro valor e %f e o segundo e %f \n", valor1, valor2);

  aux1=valor1;
  aux2=valor2;

  valor1=aux2;
  valor2=aux1;

  printf("o primeiro numero agora e %f e o segundo agora e %f", valor1, valor2);
  
}