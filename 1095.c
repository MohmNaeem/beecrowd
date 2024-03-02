#include <stdio.h>

int main()
{
    int i = 60;
    int k = 1;
    while (i >= 0)
    {
        printf("I=%d J=%d\n", k, i);
        k += 3;
        i -= 5;
    }
}
