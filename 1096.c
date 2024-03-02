#include <stdio.h>

int main()
{
    int i, j, t = 7;
    for (i = 1; i <= 9; i += 2)
    {
        for (j = t; j >= t - 2; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
        t += 2;
    }
}
