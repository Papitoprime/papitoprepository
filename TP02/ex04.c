#include <stdio.h>

void ft_pyramid(int number)
{
    int x;
    int j;

    x = 0;
    while (x <= number)
    {
        j = 0;
        while (j <= x)
        {
            printf("%d", j);
            j++;
        }
        printf("\n");
        x++;
    }
}