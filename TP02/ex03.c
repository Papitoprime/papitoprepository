int ft_cumulative(int number)
{
    int somme;
    int i;

    somme = 0;
    i = 1;
    while (i <= number)
    {
        somme += i;
        i++;
    }
    return (somme);
}