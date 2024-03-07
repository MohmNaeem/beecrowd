#include <stdio.h>

int main()
{
    while(1)
    {
        int m, n,sum=0;
        scanf("%d %d", &m, &n);
        if(m <= 0 || n <= 0)
        {
            break;
        }


        if(m > n)
        {
            for(n; n<=m; n++)
            {
                printf("%d ",n);
                sum+=n;
            }
            printf("Sum=%d\n",sum);
        }
        else
        {
            for(m; m<=n; m++)
            {
                printf("%d ",m);
                sum+=m;
            }
            printf("Sum=%d\n",sum);
        }
    }
}
