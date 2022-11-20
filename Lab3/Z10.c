#include <stdio.h>
int main()
{
 int a, b, c;
 printf("Podaj dlugosci trzech odcinkow (po przecinku)\n");
 scanf("%d,%d,%d", &a, &b, &c);
 if (a+b>c && a+c>b && b+c>a) printf ("Da sie utworzyc trojkat.\n");
 else printf("Nie da sie utworzyc trojkata.\n");
 return 0;
}
