#include <stdio.h>
int main()
{
 printf("Podaj dwie liczby \n");
 int l1, l2;
 scanf("%d %d \n", &l1, &l2);
 if (l1==l2) printf ("Liczby sa rowne!\n");
else {
         if (l1>l2) printf("Wieksza liczba to %d\n", l1);
        else printf("Wieksza liczba to %d\n", l2);
}
 return 0;   
}