#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int x, y,sum=0;
        scanf("%d %d", &x, &y);

        if(x > y)
        {
            y = y+1;
            for(y;y<x;y++)
            {
                if(y%2 != 0)
                {
                    sum+=y;
                }
            }
        }
        else
        {
            x = x +1;
            for(x;x<y;x++)
            {
                if(x % 2 != 0)
                {
                    sum+=x;
                }
            }
        }

        printf("%d\n",sum);
    }
}