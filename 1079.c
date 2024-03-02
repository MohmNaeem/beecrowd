#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        double a, b, c, weighted_average;
        scanf("%lf %lf %lf", &a, &b, &c);
        weighted_average = ((a * 2) + (b * 3) + (c * 5)) / 10;
        printf("%.1lf\n", weighted_average);
    }
}
