#include <stdio.h>

int main()
{
    long long t, total, tC = 0, tR = 0, tS = 0;
    scanf("%lld", &t);

    while (t--)
    {
        long long a;
        char c;
        scanf("%lld %c", &a, &c);

        total += a;
        if (c == 'C')
        {
            tC += a;
        }
        else if (c == 'R')
        {
            tR += a;
        }
        else if (c == 'S')
        {
            tS += a;
        }
    }

    printf("Total: %lld cobaias\n", total);
    printf("Total de coelhos: %lld\n", tC);
    printf("Total de ratos: %lld\n", tR);
    printf("Total de sapos: %lld\n", tS);

    printf("Percentual de coelhos: %.2lf %\n", ((double)tC / total) * 100);
    printf("Percentual de ratos: %.2lf %\n", ((double)tR / total) * 100);
    printf("Percentual de sapos: %.2lf %\n", ((double)tS / total) * 100);
}
