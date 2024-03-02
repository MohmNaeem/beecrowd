#include <stdio.h>

int main()
{
    int amount, remainder, temp, nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, nota_1;
    scanf("%d", &amount);
    temp = amount;

    if (temp >= 100)
    {
        nota_100 = temp / 100;
        remainder = temp % 100;
        temp = remainder;
    }
    else
    {
        nota_100 = 0;
    }

    if (temp < 100 && temp >= 50)
    {
        nota_50 = temp / 50;
        remainder = temp % 50;
        temp = remainder;
    }
    else
    {
        nota_50 = 0;
    }

    if (temp < 50 && temp >= 20)
    {
        nota_20 = temp / 20;
        remainder = temp % 20;
        temp = remainder;
    }
    else
    {
        nota_20 = 0;
    }

    if (temp < 20 && temp >= 10)
    {
        nota_10 = temp / 10;
        remainder = temp % 10;
        temp = remainder;
    }
    else
    {
        nota_10 = 0;
    }

    if (temp < 10 && temp >= 5)
    {
        nota_5 = temp / 5;
        remainder = temp % 5;
        temp = remainder;
    }
    else
    {
        nota_5 = 0;
    }

    if (temp < 5 && temp >= 2)
    {
        nota_2 = temp / 2;
        remainder = temp % 2;
        temp = remainder;
    }
    else
    {
        nota_2 = 0;
    }

    if (temp >= 0 && temp < 2)
    {
        nota_1 = temp / 1;
        remainder = temp % 1;
        temp = remainder;
    }
    else
    {
        nota_1 = 0;
    }

    if (amount > 0)
    {
        printf("%d\n", amount);
    }
    else
    {
        amount = 0;
        printf("%d\n", amount);
    }

    printf("%d nota(s) de R$ 100,00\n", nota_100);
    printf("%d nota(s) de R$ 50,00\n", nota_50);
    printf("%d nota(s) de R$ 20,00\n", nota_20);
    printf("%d nota(s) de R$ 10,00\n", nota_10);
    printf("%d nota(s) de R$ 5,00\n", nota_5);
    printf("%d nota(s) de R$ 2,00\n", nota_2);
    printf("%d nota(s) de R$ 1,00\n", nota_1);
}
