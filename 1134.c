#include <stdio.h>

void solution()
{
    int n = 0, tA = 0, tG = 0, tD = 0;

    while (n != 4)
    {
        scanf("%d", &n);

        if (n == 1)
        {
            tA++;
        }
        else if (n == 2)
        {
            tG++;
        }
        else if (n == 3)
        {
            tD++;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", tA);
    printf("Gasolina: %d\n", tG);
    printf("Diesel: %d\n", tD);
}

int main()
{
    solution();
}