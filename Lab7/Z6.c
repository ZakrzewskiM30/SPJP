#include<stdio.h>

void fun(int *, int *);

int main()
{
int tab[7] = {0};

fun(tab, tab+7);
for (int i = 0; i<7; i++)
    {
    printf("tab[%i] = %i\n",i, *(tab+i));

    }

return 0;
}

void fun(int * tab, int * tab2)
{
int rozmiar = tab2 - tab;
printf("Rozmiar: %i\n", rozmiar);
for (int i = 0; i<rozmiar; i++)
    {
    *(tab+i) = i+1;
    }
}
