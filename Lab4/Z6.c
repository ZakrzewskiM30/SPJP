#include<stdio.h>

int main()
{
int a[2][2] = {{1,0},{0,1}};
printf("Program tworzy prostokat.\n");
printf("|--|");
printf("\n");
for (int i=0;i<2;i++)
{
    printf("|");
    for (int j=0;j<2;j++)
    {
    if (a[i][j]==1) printf("X");
    else printf(" ");
    }
    printf("|\n");
}
printf("|--|");
return 0;
}
