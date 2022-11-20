#include <stdio.h>
int main()
{
 printf("Podaj dlugosci przyprostokatnych i przeciwprostokatnej (po przecinku)... \n");
 int a, b, c;
 scanf("%d,%d,%d", &a, &b, &c);
 if (a*a+b*b==c*c) printf ("Mozna utworzyc trojkat prostokatny.\n");
 else printf("Nie da sie utworzyc trojkata prostokatnego.\n");
 return 0;
}

