#include<stdio.h>

int zmienna_globalna = 2;

int wywolanie(int, int);

int main()
{
int zmienna_lokalna = zmienna_globalna;
printf("Adres zmiennej lokalnej: %p \n", &zmienna_lokalna);
printf("Adres zmiennej globalnej: %p \n", &zmienna_globalna);
wywolanie(zmienna_lokalna, zmienna_globalna);

return 0;
}

int wywolanie(int zmienna1, int zmienna2)
{
printf("Adres zmiennej1 funkcji: %p\n", &zmienna1);
printf("Adres zmiennej2 funkcji: %p\n", &zmienna2);

return 0;
}
