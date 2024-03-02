#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
    char name1[MAX_LENGTH], name2[MAX_LENGTH], name3[MAX_LENGTH];
    scanf("%s %s %s", &name1, &name2, &name3);

    if (strcmp(name1, "vertebrado") == 0)
    {
        if (strcmp(name2, "ave") == 0)
        {
            if (strcmp(name3, "carnivora") == 0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if (strcmp(name3, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else
    {
        if (strcmp(name2, "inseto") == 0)
        {
            if (strcmp(name3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if (strcmp(name3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }
}
