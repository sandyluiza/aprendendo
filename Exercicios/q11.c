/*trabalhando com matriz*/
#include <stdio.h>
int main()
{
  char Informacoes [3][3][3];

  printf ("Digite o nome ");
  scanf ("%s", &Informacoes [1][0][0]);
  printf ("Digite a cidade ");
  scanf("%s", &Informacoes [0][1][0]);
  printf ("Digite o telefone ");
  scanf("%s", &Informacoes [0][0][1]);

  printf ("%s", Informacoes [1][0][0]);
  printf ("%c", Informacoes [0][1][0]);
  printf ("%c", Informacoes [0][0][1]);
}