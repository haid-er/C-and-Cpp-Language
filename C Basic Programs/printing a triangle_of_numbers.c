#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    // clrscr();
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%d\t", j * j);
        printf("\n");
    }
    getch();
}