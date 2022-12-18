#include<stdio.h>

void zamiana(int*, int*);

int main()
{
int zmienna1 = 2;
int zmienna2 = 3;

printf("Zmienna1 przed zamiana: %i \n", zmienna1);
printf("Zmienna2 przed zamiana: %i \n", zmienna2);

zamiana(&zmienna1, &zmienna2);
printf("Zmienna1 po zamianie: %i \n", zmienna1);
printf("Zmienna2 po zamianie: %i \n", zmienna2);

return 0;
}

void zamiana(int* zmienna1, int* zmienna2)
{
int x = *zmienna1;
*zmienna1 = *zmienna2;
*zmienna2 = x;
}
