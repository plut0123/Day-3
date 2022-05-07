#include <stdio.h>
int my_compute_factorial_REC(int nb);

int main(void) {
    int num = 2;
    int result;
    result = my_compute_factorial_REC(num);
    //printf("%d", result);
    
    return 0;
}

int my_compute_factorial_REC (int nb) {
    int i = nb;
    int m = 1;
    int r;
    if (i = 1) {
    printf ("%d",r);
        return r;
    }
    else
        r = i * m;
        my_compute_factorial_REC (i - 1);     
}