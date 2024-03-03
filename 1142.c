#include <stdio.h>

void solution()
{
    int n, a = 1, b = 2, c = 3;
    scanf("%d", &n);

    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d %d %d PUM\n", a, b, c);
        a += 4;
        b += 4;
        c += 4;
    }
}

int main()
{
    solution();
}