#include <stdio.h>
int main()
{
	int a, b, somint, difint;
    float c, d, somflo, difflo;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    
    somint=a+b;
    difint=a-b;
    
    somflo=c+d;
    difflo=c-d;
    
    printf ("%d %d\n", somint, difint);
    printf ("%.1f %.1f", somflo, difflo);
    
    return 0;
}
