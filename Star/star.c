#include <stdio.h>
void star(unsigned int size);

void star(unsigned int size)
{
    int i;
    int j;
    for (i = 0; i <= size * 4; i++)
    {
        for (j = 0; j <= size * 4; j++)
        {
            if (j == size * 2 + i || j == size * 2 - i || j == i && j <= size * 2 || j == 4 * size - i && i <= size * 2 || i == size / 4 || i == size * 7 / 4)

                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main(void)
{
    int x = 8;
    star(x);
    return 0;
}
