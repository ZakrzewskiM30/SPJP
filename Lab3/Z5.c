#include <stdio.h>
int main()
{
 char c1;
 printf("Podaj znak ASCII... ");
 scanf("%c", &c1);
 if (c1>=65 && c1<=90 || c1>=97 && c1<=122) printf ("To jest litera alfabetu.\n");
 else printf("To nie jest litera alfabetu.\n");
 return 0;
}
