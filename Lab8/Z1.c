#include<stdio.h>
#include<stdlib.h>


int main()
{
FILE *fp = fopen("liczby.txt", "r");
int n = 0;
int w = 0;
int m = 0;
if (fp == NULL)
    {
    puts("Error opening file.");
    exit(1);
    }

while(fscanf(fp, "%i", &n) != EOF)
    {
    if(n>w) w = n;
    }
fscanf(fp,"%i", &m);
m = n;
rewind(fp);
while(fscanf(fp, "%i", &n) != EOF)
    {
    if(n<m) m = n;
    }
printf("Liczba najwieksza: %i\n", w);
printf("Liczba najmniejsza: = %i", m);

fclose(fp);

    return 0;
 }
