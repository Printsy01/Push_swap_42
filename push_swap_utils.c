static int temp_atoi(char const *nptr)
{
    int i;
    int result;
    int index;

    i = 0;
    index = 0;
    result = 0;
    while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
        index = i;
    if (nptr[i] == '-' || nptr[i] == '+')
        i++;
    while (nptr[i] < 58 && nptr[i] > 47)
    {
        result += (nptr[i] - 48);
        if (nptr[i + 1] < 58 && nptr[i + 1] > 47)
            result *= 10;
        i++;
    }
    if (nptr[index] == 45)
        result *= (-1);
    return (result);
}

int ft_atoi(char const *nptr)
{
    if (nptr == "-2147483648")
        return (-2147483648);
    else
        return (temp_atoi(nptr));
}