#include <stdio.h>
int main()
{
 int l1, l2;
 printf("Podaj pierwsza liczbe: ");
 scanf("%d", &l1);
 printf("Podaj druga liczbe: ");
 scanf("%d", &l2);
 printf("Wynik %d+%d = %d \n",l1,l2, l1+l2);
 printf("Wynik %d-%d = %d \n",l1,l2, l1-l2);
 printf("Wynik %d*%d = %d \n",l1,l2, l1*l2);
 printf("Wynik %d/%d = %d \n",l1,l2, l1/l2);
 printf("Wynik %d mod %d = %d \n",l1,l2, l1%l2);
 printf("Wynik %d mod %d = %d \n",l2,l1, l2%l1);
 return 0;
}
