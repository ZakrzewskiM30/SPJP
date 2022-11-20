#include <stdio.h>
int main()
{
int l1, l2, l3;
printf("Podaj pierwsza liczbe: ");
scanf("%d", &l1);
printf("Podaj druga liczbe: ");
scanf("%d", &l2);
printf("Podaj trzecia liczbe: ");
scanf("%d", &l3);
 if (l1>l2 && l1>l3) printf ("Najwieksza liczba to %d.\n", l1);
 else if (l2>l1 && l2>l3) printf("Najwieksza liczba to %d.\n", l2);
 else if (l3>l1 && l3>l2) printf("Najwieksza liczba to %d.\n", l3);
 else printf("Liczby sa rowne.");
 return 0;
}
