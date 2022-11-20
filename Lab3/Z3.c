#include <stdio.h>
int main()
{
int l1, l2;
printf("Podaj pierwsza liczbe: ");
scanf("%d", &l1);
printf("Podaj druga liczbe: ");
scanf("%d", &l2);
if (l1>l2) printf ("Wieksza liczba to %d.\n", l1);
else if (l2>l1) printf("Wieksza liczba to %d\.\n", l2);
else printf("Liczby sa rowne.");
return 0;
}
