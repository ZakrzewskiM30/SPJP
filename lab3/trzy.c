#include <stdio.h>
int main()
{
 printf("Podaj trzy liczby \n");
 int l1, l2, l3;
 scanf("%d %d %d \n", &l1, &l2, &l3);
 if (l1>l2 && l1>l3) printf ("Najwieksza liczba to %d!\n", l1);
 if (l2>l1 && l2>l3) printf("Najwieksza liczba to %d\n", l2);
 if (l3>l1 && l3>l2) printf("Najwieksza liczba to %d\n", l3);
 else {printf("Liczby sa rowne!");}
 return 0;   
}