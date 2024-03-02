#include <stdio.h>

int main()
{
    int n = 0, sum = 0, i = 0;

    while (n >= 0)
    {
        scanf("%d", &n);
        if (n >= 0)
        {
            sum += n;
            i++;
        }
    }

    printf("%.2lf\n", (double)sum / i);
}
