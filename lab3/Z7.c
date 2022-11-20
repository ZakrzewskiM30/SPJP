#include <stdio.h>
int main()
{
int l1, l2, l3;
printf("Podaj dzien: ");
scanf("%d", &l1);
printf("Podaj miesiac: ");
scanf("%d", &l2);
printf("Podaj rok: ");
scanf("%d", &l3);
if (l1>0 && l1<32 && l2>0 && l2<13 && l3<2023) printf ("Data jest poprawna: %d.%d.%d.\n",l1,l2,l3);
else printf("Data jest niepoprawna.\n");
return 0;
}
