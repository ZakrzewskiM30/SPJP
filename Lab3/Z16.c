#include <stdio.h>
int main()
{
 int a [4]={0},b[5]={1,2,3,4,5};
 int liczba=0;
 int tr=0;
 printf("Podaj liczbe z zakresu 1-5. Masz cztery proby.\n");
 for (int i=3; i>=0; i--)
 {
 scanf("%d", &a[i]);
 for (int j=1; j<6; j++) if(a[i]==j) b[j-1]=0;
 if (a[i]>5 || a[i]<1) printf("Zmarnowales szanse. Liczba pozostalych szans: %i.\n",i);
 else printf("To nie ta liczba. Liczba pozostalych szans: %i.\n",i);
 }
for (int i=0; i<5; i++) if (b[i] != 0) liczba = b[i];
 printf("Poprawna liczba: %i.\n",liczba);
 return 0;
}
