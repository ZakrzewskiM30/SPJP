#include<stdio.h>

int main()
{
int a,b,w;
int i=0;
a,b,w=1;
printf("Program zwraca liczbe c taka, ze a do potegi c jest wieksze od b.\n");
printf("Podaj liczbe a i b (po przecinku).\n");
scanf("%d, %d",&a,&b);
while (w<=b)
{
if (a==1&&b==1) break;
w=w*a;
i++;
}
printf("Liczba c wynosi %d.", i);
return 0;
}
