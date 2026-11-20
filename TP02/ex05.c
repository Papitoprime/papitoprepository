#include <stdio.h>

void ft_print_even_odd(int start, int end)
{
    int i;
    int first;

    // --- Ligne des Pairs (Even) ---
    i = start;
    first = 1;
    // On vérifie d'abord si l'intervalle contient au moins un pair
    while ((start <= end && i <= end) || (start > end && i >= end))
    {
        if (i % 2 == 0)
        {
            if (first)
            {
                printf("Even:");
                first = 0;
            }
            printf(" %d", i);
        }
        if (start <= end)
            i++;
        else
            i--;
    }
    if (!first)
        printf("\n");

    
    i = start;
    first = 1;
    while ((start <= end && i <= end) || (start > end && i >= end))
    {
        if (i % 2 != 0 && i % 2 != -1) 
        {
            if (first)
            {
                printf("Odd:");
                first = 0;
            }
            printf(" %d", i);
        }
        else if (i % 2 != 0) 
        {
            if (first)
            {
                printf("Odd:");
                first = 0;
            }
            printf(" %d", i);
        }
        
        if (start <= end)
            i++;
        else
            i--;
    }
    if (!first)
        printf("\n");
}