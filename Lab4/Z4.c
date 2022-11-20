#include<stdio.h>

int main()
{
int a[] = {1,2,3,4};
printf("Program zwraca tablice kwadratow tablicy liczb.\n");
for (int i=0;i<4;i++)
{
a[i]=a[i]*a[i];
}
for (int i=0;i<4;i++) printf("Liczba a[%i] = %i.",i,a[i]);
return 0;
}
