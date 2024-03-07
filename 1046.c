#include <stdio.h>

int main()
{
    int s, e;
    scanf("%d %d", &s, &e);

    if (s >= e)
    {
        int hours = (24 + e) - s;
        printf("O JOGO DUROU %d HORA(S)\n", hours);
    }
    else
    {
        int hours = e - s;
        printf("O JOGO DUROU %d HORA(S)\n", hours);
    }
}