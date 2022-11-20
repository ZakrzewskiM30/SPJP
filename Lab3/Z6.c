#include <stdio.h>
int main()
{
 int r1;
 printf("Podaj rok... ");
 scanf("%i", &r1);
 if (r1%4==0 && r1%100>0 || r1%400==0) printf ("Rok jest przestepny.\n");
 else printf("To nie jest rok przestepny.\n");
 return 0;
}
