#include<stdio.h>

int main()
{
int a=0;
int pierwsza=1;
printf("Program sprawdza, czy liczba jest pierwsza.\n");
printf("Podaj liczbe.\n");
scanf("%d",&a);
for (int i=2;i*i<=a;i++)
{
    if (a%i==0)
    {
    printf("Liczba nie jest pierwsza.");
    pierwsza=0;
    break;
    }
}
if (pierwsza==1) printf("Liczba jest pierwsza.");
return 0;
}
