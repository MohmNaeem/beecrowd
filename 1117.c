#include <stdio.h>

int main()
{
    int valid=0;
    double a, b;

    while(1)
    {
        double n;
        scanf("%lf", &n);

        if(n>=0 && n<=10)
        {
            if(valid == 0)
            {
                valid++;
                a=n;
            }
            else
            {
                valid++;
                b=n;
                break;
            }

        }
        else
        {
            printf("nota invalida\n");
        }
    }

    if(valid == 2)
    {
        printf("media = %.2lf\n", (a+b)/2);
    }
}