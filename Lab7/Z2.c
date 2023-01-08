#include<stdio.h>

int main()
{
int tab[10]={0};
for (int i=0; i<10; i++)
{
printf("Podaj element a[%i] tablicy.\n", i);
scanf("%5i", tab+i);
}

for (int i = 0; i<10; i++)
{
printf("Element tab[%i] = %i\n", i, *(tab+i));
}
return 0;
}
