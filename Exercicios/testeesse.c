#include <stdio.h>
#include <string.h>
int main()
{  
  char Name[10];
  char Option;
  
  printf ("Can you tell me your name? (Y/N)");
  scanf ("%c", &Option);
  
  if (Option == 'Y')
  {
    printf ("Type your name ");
    scanf("%s", Name);
    getchar();
    printf ("Hello, %s!", Name);
  }
  else
  {
    printf ("Hello there!");
  }
}