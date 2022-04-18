/*calcular o fatorial de um numero*/
#include <stdio.h>
int main()
{
  int numero, fatorial, i;
  printf ("digite o numero");
  scanf ("%d", &numero);
  fatorial = 1;
  i=1;
    
  for (i=1; i<=numero; i=i+1)
    {
    fatorial = fatorial*i;
    }
  
  printf("o valor do fatorial e %d", fatorial);
}