#include <stdio.h>

int my_compute_power_IT (int nb, int p);

int main (void) {
    int i = 2;
    int t = 4;
    int result;
    result = my_compute_power_IT (i, t);
    printf("%d", result);
    return 0;
 }

 int my_compute_power_IT (int nb,int p) {
    int a = 1;
    for (int b = p; b > 0; b--)
    {
        a = a * nb;
    }
    return a;
 }