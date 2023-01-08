#include<stdio.h>

int main()
{
FILE *p = fopen("parzyste.txt", "w");
FILE *np = fopen("nieparzyste.txt", "w");
int n = 0;
int liczba = 0;

puts("Podaj ile liczb chcesz podac.");
scanf("%i", &n);
puts("Podaj liczby.");
for(int i = 0; i<n; i++)
    {
        scanf("%i", &liczba);
        if(liczba %2 == 0) fprintf(p,"%i\n", liczba);
            else fprintf(np, "%i\n", liczba);
    }
fclose(np);
fclose(p);

return 0;
}
