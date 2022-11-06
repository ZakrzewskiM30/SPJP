#include <stdio.h>
int main()
{
 printf("Podaj dwie liczby \n");
 int l1, l2;
 scanf("%d %d \n", &l1, &l2);
 printf("Wynik a+b = %d \n", l1+l2);
 printf("Wynik a-b = %d \n", l1-l2);
 printf("Wynik a-b = %d \n", l1*l2);
 printf("Wynik a/b = %d \n", l1/l2);
 printf("Wynik a mod b = %d \n", l1%l2);
 return 0;   
}