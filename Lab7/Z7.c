#include<stdio.h>

int n = 1;

void element(int*);
void dodac(int*);
void usun(int*);

int main()
{
int tab[100] = {0};
int opcja = 0;

while(1)
{
puts("Wybierz opcje.");
puts ("0 - wyjdz");
puts ("1 - wypisz elementy tablicy");
puts ("2 - wstawia cyfre do tablicy");
puts ("3 - usuwa element");
puts ("4 - suma cyfr w tablicy");
scanf("%1i", &opcja);

switch(opcja)
{
case 0 :
        goto END;
        break;

case 1 :
        element(&tab);
        break;
case 2 :
        dodac(&tab);
        break;
case 3 :
        usun(&tab);
        break;
case 4 :

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
for (int i = index-1; i<n; i++) *(tab+index+i-1) = *(tab+index+i);
n = n-1;
}
