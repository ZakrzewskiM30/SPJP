#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20

struct osoba
{
char imie [SIZE];
char nazwisko [SIZE];
} o1, o2;

int main()
{
FILE *fp = fopen("baza.txt", "r");
if(fp == NULL)
{
puts("Blad otwarcia pliku.");
exit(0);
}
int comp = 0;

puts("Podaj imie.");
scanf("%s", o1.imie);
puts("Podaj nazwisko.");
scanf("%s", o1.nazwisko);
while(!feof(fp))
{
    fscanf(fp,"%s",o2.imie);
        if(strcmp(o1.imie, o2.imie) == 0)
            {
            comp++;
            fscanf(fp,"%s",o2.nazwisko);
                if(strcmp(o1.nazwisko, o2.nazwisko) == 0) comp++;
                else comp = 0;
            }
    if(comp == 2) break;
}
if(comp == 2) printf("Osoba %s %s jest na liscie.", o1.imie, o1.nazwisko);
if(comp < 2) printf("Osoba %s %s nie jest na liscie.", o1.imie, o1.nazwisko);
fclose(fp);

return 0;
}
