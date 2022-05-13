#include <stdio.h>
void rush(int x, int y, int z, char c1, char c2, char c3, char c4, char c5, char c6)
{

    if (x != 1 && y != 1)
    {
        for (int i = 1; i <= y; i++)
        {
            for (int j = 1; j <= x; j++)
            {
                if (i == 1 || i == y || j == 1 || j == x)
                {
                    if (i == 1 || i == y)
                    {
                        if (j == 1 || j == x)
                        {
                            if (j == 1 && i == 1)
                                printf("%c", c1);
                            else if (j == x && i == y)
                            {
                                printf("%c", c4);
                            }
                            else if (i == 1 && j == x)
                            {
                                printf("%c", c5);
                            }
                            else
                                printf("%c", c3);
                        }
                        else if (i != 1 && i != y)
                            printf("%c", c2);
                        else
                            printf("%c", c6);
                    }
                    if (i != 1 && i != y)
                    {
                        if (j == 1 || j == x)
                            printf("%c", c2);
                    }
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    else if (z != 1)
    {
        for (int i = 1; i <= y; i++)
        {
            for (int j = 1; j <= x; j++)
            {
                printf("%c", c2);
            }
            printf("\n");
        }
    }
    else
    {
        for (int i = 1; i <= y; i++)
        {
            for (int j = 1; j <= x; j++)
            {
                if (i == 1 && j == 1 || i == 1 && j == x || i == y && j == 1)
                    printf("o");
                else if (i != 1)
                    printf("|");
                else
                    printf("-");
            }
            printf("\n");
        }
    }
}
char rectype1(int z)
{
    char *c1;
    if (z == 1)
        c1 = "o";
    else if (z == 2)
        c1 = "/";
    else if (z == 3)
        c1 = "A";
    else if (z == 4)
        c1 = "A";
    else if (z == 5)
        c1 = "A";
    return *c1;
}
char rectype2(int z)
{
    char *c2;
    if (z == 1)
        c2 = "|";
    else if (z == 2)
        c2 = "*";
    else if (z == 3)
        c2 = "B";
    else if (z = 4)
        c2 = "B";
    else if (z == 5)
        c2 = "2";
    return *c2;
}
char rectype3(int z)
{
    char *c3;
    if (z == 1)
        c3 = "o";
    else if (z == 2)
        c3 = "\\";
    else if (z == 3)
        c3 = "C";
    else if (z == 4)
        c3 = "A";
    else if (z == 5)
        c3 = "C";
    return *c3;
}
char rectype4(int z)
{
    char *c4;
    if (z == 1)
        c4 = "o";
    else if (z == 2)
        c4 = "/";
    else if (z == 3)
        c4 = "C";
    else if (z == 4)
        c4 = "C";
    else if (z == 5)
        c4 = "A";
    return *c4;
}
char rectype5(int z)
{
    char *c5;
    if (z == 1)
        c5 = "o";
    else if (z == 2)
        c5 = "\\";
    else if (z == 3)
        c5 = "A";
    else if (z == 4)
        c5 = "C";
    else if (z == 5)
        c5 = "C";
    return *c5;
}
char rectype6(int z)
{
    char *c6;
    if (z == 1)
        c6 = "-";
    else if (z == 2)
        c6 = "*";
    else if (z == 3)
        c6 = "B";
    else if (z = 4)
        c6 = "B";
    else if (z == 5)
        c6 = "2";
    return *c6;
}

int main(void)
{
    int x = 1; // x axis
    int y = 1; // y axis
    int z = 1; // z = number of assigment
    char c1 = rectype1(z);
    char c2 = rectype2(z);
    char c3 = rectype3(z);
    char c4 = rectype4(z);
    char c5 = rectype5(z);
    char c6 = rectype6(z);

    rush(x, y, z, c1, c2, c3, c4, c5, c6);
    return 0;
}
