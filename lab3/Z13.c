#include <stdio.h>
int main()
{
 int a;
 printf("Dla 0 radianów wybierz 1 \n");
 printf("Dla 1/6 Pi rad wybierz 2 \n");
 printf("Dla 1/4 Pi rad wybierz 3 \n");
 printf("Dla 1/3 Pi rad wybierz 4 \n");
 printf("Dla 1/2 Pi rad wybierz 5 \n");
 scanf("%d", &a);
 switch (a)
 {
 case 1 : printf ("0 radianow to 0 stopni.\n"); break;
 case 2 : printf ("1/6 Pi rad to 30 stopni.\n"); break;
 case 3 : printf ("1/4 Pi rad to 45 stopni.\n"); break;
 case 4 : printf ("1/3 Pi rad to 60 stopni.\n"); break;
 case 5 : printf ("1/2 Pi rad to 90 stopni.\n"); break;
 }
 return 0;
}
