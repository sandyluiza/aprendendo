/*perguntar idade ate idade negativa*/
#include <stdio.h>
int main()
{
  int idade;
  printf("informe a sua idade ");
  scanf("%d", &idade);

  while (idade > 0)
  {
    if (idade < 18)
    {
      printf("voce e menor de idade \n");
    }
    else
    {
      printf("voce e maior de idade \n");
    }
    
    printf("informe a sua idade ");
    scanf("%d", &idade);
  }
  printf("a idade fornecida e negativa");
}