#include <stdio.h>

int main()
{
    double n;
    scanf("%lf", &n);

    if (n >= 0 && n <= 2000)
    {
        printf("Isento\n");
    }
    else if (n >= 0 && n <= 3000)
    {
        double res = n - 2000;
        double per = (8 * res) / 100;
        printf("R$ %.2lf\n", per);
    }
    else if (n >= 0 && n <= 4500)
    {
        double res = n - 2000;
        double res2 = res - 1000;
        double p1 = (8 * 1000) / 100.0;
        double p2 = (18 * res2) / 100.0;
        printf("R$ %.2lf\n", p1 + p2);
    }
    else
    {
        double res = n - 2000;
        double res2 = res - 1000;
        double res3 = res2 - 1500;
        double p1 = (8 * 1000) / 100;
        double p2 = (18 * 1500) / 100.0;
        double p3 = (28 * res3) / 100.0;
        printf("R$ %.2lf\n", p1 + p2 + p3);
    }
}
