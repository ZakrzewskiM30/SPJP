#include <stdio.h>
#define LICZBA 3
int main()
{
 int a;
 printf("Podaj liczbe z zakresu 1-5. Masz trzy proby.\n");
 for (int i=2; i>=0; i--)
 {
 scanf("%d", &a);
 if (a==LICZBA)
 {
 printf ("Odgadles prawidlowo. Gratulacje.\n");
 break;
 }
 else if (a>5 || a<1) printf("Zmarnowales szanse. Liczba pozostalych szans: %i.\n",i);
 else printf("To nie ta liczba. Liczba pozostalych szans: %i.\n",i);
 };
 return 0;
}
