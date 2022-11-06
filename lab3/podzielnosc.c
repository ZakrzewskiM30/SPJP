#include <stdio.h>
int main()
{
 printf("Podaj liczbe \n");
 int a;
 scanf("%d \n", &a);
 for (int i=2; i<7; i++)
 {
 if (a%i==0) printf ("Liczba podzielona przez %d wynosi %d.\n", i, a/i);
 else printf("Liczba jest niepodzielna przez %d.\n", i);
 };
 return 0;   
}