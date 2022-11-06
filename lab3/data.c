#include <stdio.h>
int main()
{
 printf("Podaj dzien, miesiac i rok \n");
 int l1,l2,l3;
 scanf("%i %i %i \n", &l1, &l2, &l3);
 if (l1>0 && l1<30 && l2>0 && l2<13 && l3<2022) printf ("Data jest poprawna.\n");

 else printf("Data jest niepoprawna.\n");
 return 0;   
}