#include <stdio.h>
int main()
{
 printf("Podaj rok \n");
 int r1;
 scanf("%i \n", &r1);
 if (r1%4==0 && r1%100>0 || r1%400==0) printf ("Rok jest przestepny.\n");

 else printf("To nie jest rok przestepny.\n");
 return 0;   
}