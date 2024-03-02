#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, te = 0, to = 0, tp = 0, tn = 0;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    // positive negative
    if (n1 > 0)
    {
        tp++;
    }
    else if (n1 < 0)
    {
        tn++;
    }

    if (n2 > 0)
    {
        tp++;
    }
    else if (n2 < 0)
    {
        tn++;
    }

    if (n3 > 0)
    {
        tp++;
    }
    else if (n3 < 0)
    {
        tn++;
    }

    if (n4 > 0)
    {
        tp++;
    }
    else if (n4 < 0)
    {
        tn++;
    }

    if (n5 > 0)
    {
        tp++;
    }
    else if (n5 < 0)
    {
        tn++;
    }

    // even odd
    if (n1 % 2 == 0)
    {
        te++;
    }
    else
    {
        to++;
    }

    if (n2 % 2 == 0)
    {
        te++;
    }
    else
    {
        to++;
    }

    if (n3 % 2 == 0)
    {
        te++;
    }
    else
    {
        to++;
    }

    if (n4 % 2 == 0)
    {
        te++;
    }
    else
    {
        to++;
    }

    if (n5 % 2 == 0)
    {
        te++;
    }
    else
    {
        to++;
    }

    printf("%d valor(es) par(es)\n", te);
    printf("%d valor(es) impar(es)\n", to);
    printf("%d valor(es) positivo(s)\n", tp);
    printf("%d valor(es) negativo(s)\n", tn);
}
