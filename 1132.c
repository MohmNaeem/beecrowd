#include <stdio.h>

int main()
{
    int x, y, sum = 0;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        int t;
        t = x;
        x = y;
        y = t;
    }

    for (x; x <= y; x++)
    {
        if (x % 13 != 0)
        {
            sum += x;
        }
    }

    printf("%d\n", sum);
}
