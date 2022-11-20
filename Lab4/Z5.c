#include<stdio.h>

int main()
{
int n=0;
printf("Program tworzy tablice liczb.\n");
printf("Podaj wielkosc tablicy.\n");
scanf("%i",&n);
int a[n];
for (int i=0;i<n;i++)
{
printf("Podaj liczbe a[%i].\n",i);
scanf("%i",&a[i]);
}
for (int i=0;i<n;i++) printf("Liczba a[%i] = %i. ",i,a[i]);
return 0;
}
