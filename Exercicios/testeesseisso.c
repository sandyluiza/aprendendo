#include <stdio.h>
#include <string.h>
int main() 
{
    char ch, s[100], sen[100];
    scanf("%c", &ch);
    printf("%c\n", ch);
    getchar();
  
    fgets(s, 100, stdin);
    printf("%s", s);
  
    scanf("%[^\n]%*c", sen);
    printf("%s", sen);
    return 0;
  }