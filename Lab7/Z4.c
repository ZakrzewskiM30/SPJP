#include<stdio.h>

void tablica(int*, int);

int main()
{
int tab []= {1, 2, 3, 4, 5, 6, 7};
int rozmiar = 7;

for (int i = 0; i<rozmiar; i++)
{
printf("Element tab[%i] = %i \n", i, *(tab+i));
}

tablica(&tab, rozmiar);

for (int i = 0; i<rozmiar; i++)
{
printf("Nowy element tab[%i] = %i\n", i, *(tab+i));
}
return 0;
}

void tablica(int * tab, int rozmiar)
{
int najwiekszy = 0;
int in = 0;
for (int i = 0; i<rozmiar; i++)
{
    if(*(tab+i) > najwiekszy)
        {
        najwiekszy = *(tab+i);
        in = i;
        }
}
printf("Najwiekszy element tab[%i] to %i\n", in, *tab+in);
*(tab+in) = 0;
}
