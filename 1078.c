#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int i = 1;
    while (i <= 10)
    {
        int ans = i * N;
        printf("%d x %d = %d\n", i, N, ans);
        i++;
    }
}
