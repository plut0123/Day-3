#include <stdio.h>

int my_is_prime (int nb);

int main (void) 
{
    int nb = -5;
    int result;
    result = my_is_prime (nb);
    printf ("%d", result);
    return 0;
}

int my_is_prime (int nb)
{
    int j = 0;
    int k;
    for (int i = 1; i <= nb; i++)
    {
        if (nb % i == 0)
            j++;
        if (j == 2)
            k = 1;
        else
            k = 0;
    }
    if (nb < 1)
      k = 0;
    return k;
    
}