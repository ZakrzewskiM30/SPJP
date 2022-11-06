#include <stdio.h>
int main()
{
 printf("Podaj dwie daty \n");
 int l1,l2,l3, l4, l5, l6;
 int dni, mies, lata;
 scanf("%i %i %i %i %i %i \n", &l1, &l2, &l3, &l4, &l5, &l6);
 dni = l1-l4;
 mies = l2-l5;
 lata = l3-l6;
 if (dni<0) dni=-dni;
 if (mies<0) mies=-mies;
 if (lata<0) lata=-lata;
 printf("Ilosc dni %d, ilosc miesiecy %d, ilosc lat %d.\n", dni, mies, lata);
 return 0;   
}