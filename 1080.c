#include <stdio.h>

int main()
{
    int numbers[100], largest = 0, position = 1;

    int i;
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 100; i++)
    {
        if (largest > numbers[i])
        {
            largest = largest;
            position = position;
        }
        else
        {
            largest = numbers[i];
            position = i + 1;
        }
    }

    printf("%d\n", largest);
    printf("%d\n", position);
}