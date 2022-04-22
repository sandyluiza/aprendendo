/*praticando estrutura*/
#include <stdio.h>
#include <string.h>

typedef struct
{
char Nome[10];
char Sexo;
}
Nomeesexo;

int main()
{
  Nomeesexo nomeesexos[1];
  printf ("digite o nome ");
  fgets (nomeesexos[1].Nome, 10, stdin);
  printf("digite o sexo (F ou M) ");
  scanf("%c", &nomeesexos[1].Sexo);

  printf ("Nome: %s", nomeesexos[1].Nome);
  printf("Sexo: %c \n", nomeesexos[1].Sexo);
  getchar();
}