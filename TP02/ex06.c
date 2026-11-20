#include <stdio.h>

void ft_print_number_len(int number)
{
    int len;
    long n; 

    len = 0;
    n = number;
    if (n == 0)
    {
        len = 1;
    }
    else
    {
        if (n < 0)
        {
            n = -n; 
        }
        while (n > 0)
        {
            n /= 10;
            len++;
        }
    }
    printf("%d\n", len);
}