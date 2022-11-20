#include<stdio.h>

int main()
{
int n;
int l=0;
printf("Program oblicza sume kwadratow. Podaj liczbe n.\n");
scanf("%d",&n);
for (int i=1;i<n+1;i++) l=l+i*i;
printf("Suma kwadratow liczb wynosi %d", l);
return 0;
}
