#include <stdio.h>
#include <math.h>

int my_compute_square_root (int nb);

int main (void) {
    int x = 100;
    int result = my_compute_square_root (x);
    printf ("%d",result);
    return 0;

}

int my_compute_square_root (int nb) {
    int sq = 0;
    while (sq * sq < nb)
    {
        sq++;
    }
    
    
    return sq;

    
}
