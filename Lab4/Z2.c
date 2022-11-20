#include<stdio.h>

int main()
{
int a,b,c;
a,b,c=1;
printf("Program oblicza a do potegi b. Podaj liczbe a i b (po przecinku).\n");
scanf("%d, %d",&a,&b);
for (int i=0;i<b;i++) c=c*a;
printf("Liczba a do potegi b wynosi %d", c);
return 0;
}
