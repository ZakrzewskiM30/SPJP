#include <stdio.h>
int main()
{
 int d1,d2,m1, m2, l1, l2;
 int dni, mies, lata;
 printf("Podaj dzien, miesiac i rok wczesniejszej daty (po przecinku)...\n");
 scanf("%i,%i,%i", &d1, &m1, &l1);
 printf("Podaj dzien, miesiac i rok pozniejszej daty (po przecinku)...\n");
 scanf("%i,%i,%i", &d2, &m2, &l2);
 lata = l2-l1;
 dni = d1-d2;
 mies = 12-m1+m2;
if (mies>12)
{
lata=lata+1;
mies=mies%12;
}
 printf("Ilosc dni %d, ilosc miesiecy %d, ilosc lat %d.\n", dni, mies, lata);
 return 0;
}
