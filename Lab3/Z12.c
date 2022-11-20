#include <stdio.h>
int main()
{
 int a;
 printf("Podaj liczbe: ");
 scanf("%d", &a);
 for (int i=2; i<7; i++)
 {
 if (a%i==0) printf ("%d/%d = %d.\n",a, i, a/i);
 else printf("Liczba %d jest niepodzielna przez %d.\n",a, i);
 };
 return 0;
}
