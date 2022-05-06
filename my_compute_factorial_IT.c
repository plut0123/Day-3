#include <stdio.h>

int my_compute_factorial_IT(int nb);

int main(int argc, int **argv) {
    int nb = 15;
    int i;
    i = my_compute_factorial_IT(nb);
    printf("%d", i);
    return 0;
}

int my_compute_factorial_IT(int nb) {
    int i = 1;
    if(nb > 0)
    {
        for (int m = nb; m > 0; m--)
        {
        i = i * m;
         }
    }     
    else
    {
    i = 0;
    }
 return i;

}