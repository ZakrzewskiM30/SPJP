#include <stdio.h>
int main()
{
 int a;
 float rad;
 printf("Podaj wartosc kata w stopniach.\n");
 scanf("%d", &a);
 float b=a;
 rad = b/180;
 printf("Wartosc kata w radianach wynosi %.4f pi rad.\n", rad);
 return 0;
}
