#include <stdio.h>
int main()
{
 printf("Dla 0 radianów wybierz 1 \n");
 printf("Dla 1/6 Pi rad wybierz 2 \n");
 printf("Dla 1/4 Pi rad wybierz 3 \n");
 printf("Dla 1/3 Pi rad wybierz 4 \n");
 printf("Dla 1/2 Pi rad wybierz 5 \n");
 int a;
 scanf("%d \n", &a);
 if (a==1) printf ("0 radianow to 0 stopni.\n");
if (a==2) printf ("1/6 Pi rad radianow to 60 stopni.\n");
if (a==3) printf ("1/4 Pi rad radianow to 90 stopni.\n\n");
if (a==3) printf ("1/3 Pi rad radianow to 120 stopni.\n");
if (a==3) printf ("1/2 Pi rad radianow to 180 stopni.\n");
 return 0;   
}