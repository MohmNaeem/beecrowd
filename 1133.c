#include <stdio.h>

void solution(int x, int y)
{
    if (x > y)
    {
        int i;
        for (i = y + 1; i < x; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        int i;
        for (i = x + 1; i < y; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                printf("%d\n", i);
            }
        }
    }
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    solution(x, y);
}