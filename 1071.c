#include <stdio.h>

int main()
{
    int x, y, sum = 0;
    scanf("%d %d", &x, &y);

    if (y > x)
    {
        int i;
        for (i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
    }
    else
    {
        int i;
        for (i = y + 1; i < x; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
    }

    printf("%d\n", sum);
}
