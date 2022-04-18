/*le idade e soma*/
#include <stdio.h>
int main()
{
  int idade1, idade2, somaidades;
  printf("informe a primeira idade");
  scanf("%d", &idade1);
  printf("informe a segunda idade");
  scanf("%d", &idade2);
  somaidades = idade1+idade2;
  printf("a soma das idades %d e %d e %d", idade1, idade2, somaidades);  
}