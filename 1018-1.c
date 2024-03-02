#include <stdio.h>

// powered by Aysha Khanom Anika

int main()
{
    int n;
    scanf("%d", &n);

    int a = n / 100;
    int b = n % 100;
    int c = b / 50;
    int d = b % 50;
    int e = d / 20;
    int f = d % 20;
    int g = f / 10;
    int h = f % 10;
    int i = h / 5;
    int j = h % 5;
    int k = j / 2;
    int l = j % 2;
    int m = l / 1;

    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", a);
    printf("%d nota(s) de R$ 50,00\n", c);
    printf("%d nota(s) de R$ 20,00\n", e);
    printf("%d nota(s) de R$ 10,00\n", g);
    printf("%d nota(s) de R$ 5,00\n", i);
    printf("%d nota(s) de R$ 2,00\n", k);
    printf("%d nota(s) de R$ 1,00\n", m);
}
