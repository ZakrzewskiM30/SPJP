#include<stdio.h>

int main()
{
printf("Program wyswietla b liczb pierwszych wiekszych od a.\n");
printf("Podaj liczbe a i b (po przecinku).\n");
int a,b;
a,b=0;
int ct=0;
int pierwsza=3;
scanf("%d,%d",&a,&b);
//printf("a=%i, b=%i, ct=%i\n",a,b,ct);
while (ct<b)
    {
   for (int j=2;j*j<=a;j++)
    {
   // printf("j=%i\n",j);
     if (a%j==0)
    {
  // printf("Liczba %i nie jest pierwsza. Dzieli sie przez %i\n",a,j);
    pierwsza=0;
     break;
       }
   }
if (pierwsza==3)
{
printf("%i\n",a);
ct++;
}
a++;
pierwsza=3;
//printf("count = %i",ct);
}
return 0;
}
