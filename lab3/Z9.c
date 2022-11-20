#include <stdio.h>
int main()
{
 int a, b, c, d;
 printf("Podaj wspolrzedne wierzcholka prostokata (po przecinku): ");
 scanf("%d,%d", &a, &b);
 printf("Podaj wspolrzedne przeciwleglego wierzcholka (po przecinku): ");
 scanf("%d,%d", &c, &d);
 printf("Podane wspolrzedne: (%d,%d) oraz (%d,%d).\n",a,b,c,d);
 int ab, bb;
 ab=a-c;
 bb=b-d;
 if (ab<0) ab=-ab;
 if (bb<0) bb=-bb;
 printf("Obwod wynosi = %d.\n", 2*ab+2*bb);
 printf("Pole wynosi = %d.\n", ab*bb);
 return 0;
}
