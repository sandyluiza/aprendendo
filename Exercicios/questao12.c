/*trabalhando com vetor*/
#include <stdio.h>
int main ()
{
  void MaiorElemento(int *v, int t, int m, int p)
{ 
  int i, Pos;
m = v[0];
Pos = 0;
  printf ("Digite o vetor");
  scanf ("%d", &v[i]);
for (i = 1; i < t; i = i + 1)
if (v[i] > m)
{
m= v[i];
Pos = i;
}
p = Pos;
}
void SelectSort(int *v, int t)
{ int i, Pos, Aux[500];
for(i = 0; i < t; i = i + 1)
{
MaiorElemento(v, t, Aux[t - 1 - i], Pos);
v[Pos] = -1;
}
for (i = 0; i < t; i = i + 1)
v[i] = Aux[i];
}
  printf ("o vetor e %d", v[i]);
}