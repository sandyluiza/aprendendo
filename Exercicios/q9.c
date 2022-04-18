/*ler 10 num, inf qual e primo, soma primo*/
#include <stdio.h>
int main()
{
  /*le os numeros*/
  int numero[10], i, div, aux, soma=0;
  for (i=0; i<10; i=i+1)
    {
      printf("numero[%d]: ",i);
      scanf("%d",&numero[i]); 
    }

  /*verificar se sao primos*/
  for (i=0; i<10; i=i+1)
    {
      div=0;
  for (aux=1; aux<=numero[i]; aux++)
    {
    if (numero[i] % aux == 0)
    {
      div++;
    }
    }
      
  if (div==2)
    {
      printf("o numero %d e primo \n", numero[i]);
      soma=soma+numero[i];
    } 
  else
    {
      printf("o numero %d nao e primo \n", numero[i]);
    }
    }

/*soma primos*/
  printf("a soma dos numeros primos e %d", soma);
  
}