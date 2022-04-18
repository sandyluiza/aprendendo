/*descobrir se o numero e primo*/
#include <stdio.h>
int main()
{
  int numero, div, aux;
  printf("informe o numero");
  scanf("%d", &numero);
  
  div=0;
  
  for (aux=1; aux<=numero; aux++)
    {
    if (numero % aux == 0)
    {
      div++;
    }
    }
  
  if (div==2)
    {
      printf("o numero %d e primo", numero);
    } 
  else
    {
      printf("o numero %d nao e primo", numero);
    }
}