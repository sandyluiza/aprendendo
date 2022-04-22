/*matriz com informações*/
#include <stdio.h>

int main()
{
  char Nome[5][100];
  int Idade[5], i;
  char Sexo[5][2];
  int CPF[5];
  
    for (i=0; i<5; i=i+1)
    {
      printf("\n Nome[%d]: ",i);
      scanf("%s",Nome[i]); 
      printf("\n Idade[%d]: ",i);
      scanf("%d",&Idade[i]); 
      printf("\n Sexo[%d]: ",i);
      scanf("%s",Sexo[i]); 
      printf("\n CPF[%d]: ",i);
      scanf("%d",&CPF[i]);
    }
      
for (i=0; i<5; i++)
  {
  printf("%s ", Nome[i]);
  printf("%d ", Idade[i]);
  printf("%s ", Sexo[i]);
  printf("%d ", CPF[i]);
  }
  
} 
