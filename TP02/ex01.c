#include <unistd.h>

void ft_print(void); 

void ft_print_more(int number)
{
    int i;

    i = 0;
    while (i < number)
    {
        ft_print();
        i++;
    }
}