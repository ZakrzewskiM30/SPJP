#include<stdio.h>

void sort(int*,int*,int*);

int main()

{
int a, b, c;
a = b = c = 0;

printf("Podaj liczby a, b, c.\n");
scanf("%5i %5i %5i", &a, &b, &c);

sort(&a, &b, &c);
printf("%i, %i, %i", a, b, c);

return 0;
}

void sort(int * a, int * b, int * c)
{
int x,y,z;
if(*a>=*b && *a>=*c)
    {
    z = *a;
        if(*b>=*c)
            {
            y = *b;
            x = *c;
            }
            else
            {
            y = *c;
            x = *b;
            }
    }
    else if (*b>=*a && *b>=*c)
        {
        z = *b;
        if (*a>*c)
            {
            y = *a;
            x = *c;
            }
            else
            {
            y = *c;
            x = *a;
            }
        }
        else
            {
            z = *c;
            if (*a>*b)
                {
                y = *a;
                x = *b;
                }
                else
                {
                y = *b;
                x = *a;
                }
            }
*a = x;
*b = y;
*c = z;
}
