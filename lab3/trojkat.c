#include <stdio.h>
int main()
{
 printf("Podaj dlugosci trzech odcinkow \n");
 int a, b, c;
 scanf("%d %d %d \n", &a, &b, &c);
 if (a+b>c && a+c>b && b+c>a) printf ("Da sie utworzyc trojkat.\n");
 else printf("Nie da sie.\n");
 return 0;   
}