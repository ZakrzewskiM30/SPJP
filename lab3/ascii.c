#include <stdio.h>
int main()
{
 printf("Podaj znak ASCII \n");
 char c1;
 scanf("%c \n", &c1);
 if (c1>=65 && c1<=90 || c1>=97 && c1<=122) printf ("Jest to litera alfabetu.\n");

 else printf("To nie jest litera alfabetu.\n");
 return 0;   
}