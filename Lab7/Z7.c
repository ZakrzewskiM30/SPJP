#include<stdio.h>

int n = 1;

void element(int*);
void dodac(int*);
void usun(int*);
int suma(int*);
void drzewo(int*);
int pot(int, int);

int main()
{
int tab[100] = {0};
int opcja = 0;
int sum = 0;

while(1)
{
puts("Wybierz opcje.");
puts ("0 - wyjdz");
puts ("1 - wypisz elementy tablicy");
puts ("2 - wstawia cyfre do tablicy");
puts ("3 - usuwa element");
puts ("4 - suma cyfr w tablicy");
puts ("5 - drzewo binarne");
scanf("%1i", &opcja);

switch(opcja)
{
case 0 :
        goto END;
        break;

case 1 :
        element(tab);
        break;
case 2 :
        dodac(tab);
        break;
case 3 :
        usun(tab);
        break;
case 4 :
        if((sum=suma(tab))) printf("Suma: %i\n",sum);
        else printf("Blad!");
        break;
case 5 :
        drzewo(tab);
        break;
default : printf("Blad!\n");
}

}
END:

return 0;
}

void element(int *tab)
{
if (n>0)
{
    for (int i = 0; i<n; i++)
    {
    printf("tab[%i] = %i\n", i, *(tab+i));
    }
}

else
{
printf("Blad n == 0!\n");
}
}

void dodac(int *tab)
{
 int liczba = 0;
 if(n>100)
 {
 puts("Brak miejsca w tablicy!");
 return;
 }
 puts("Podaj nowy element tablicy.");
 if(scanf("%5i", &liczba) != 1) puts("Blad! Podaj liczbe!");
    else
    {
    n = n+1;
    *(tab+(n-1)) = liczba;
    }
}

void usun(int *tab)
{
int index = 0;
puts("Podaj indeks elementu.");
scanf("%3i", &index);
for (int i = 0; index+i<n; i++) *(tab+index+i) = *(tab+index+i+1);
n = n-1;
}

int suma(int *tab)
{
    int suma = 0;
    if (n==0) return 0;
    for(int i = 0; i<n; i++)
    {
        suma +=*(tab+i);
    }
    return suma;
}

void drzewo(int *tab)
{
int s = 1;
int ilosc = n;
int rzad = 0;
int potega = 1;
int calkowita = 1;
int count = 0;

while(ilosc > 0)
{
ilosc -= s;
s *= 2;
rzad++;
}

    calkowita = pot(2, rzad-1);

    for (int i = 0; i<rzad; i++)
    {
    potega = pot(2,i);

    for (int h = 0; h<(calkowita/2-potega/2); h++) printf(" ");
    for( int l = 0; l<potega; l++) 
    {
        if(count<n) printf("%i",*(tab+count));
        else printf(" ");
        count++;
    }
    for (int h = 0; h<calkowita/2-potega/2; h++) printf(" ");
    printf("\n");
    }
}

int pot(int base, int exp)
{
    int wynik = 1;
    for (int i = 0; i<exp; i++) wynik *= base;
    return wynik;
}