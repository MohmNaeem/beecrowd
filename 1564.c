#include <stdio.h>

void solution()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        if (n != 0)
        {
            printf("vai ter duas!\n");
        }
        else
        {
            printf("vai ter copa!\n");
        }
    }
}

int main()
{
    solution();
}