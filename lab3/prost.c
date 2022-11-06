#include <stdio.h>
int main()
{
 printf("Podaj wspolrzedne wierzcholkow \n");
 int a, b, c, d;
 scanf("%d %d %d %d \n", &a, &b, &c, &d);
 int ab, bb;
 ab=a-c;
 bb=b-d;
 if (ab<0) ab=-ab;
 if (bb<0) bb=-bb;
 printf("Obwod wynosi = %d \n", 2*ab+2*bb);
 printf("Pole wynosi = %d \n", ab*bb);
 return 0;   
}