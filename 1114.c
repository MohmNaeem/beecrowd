#include <stdio.h>

int main()
{
    while(1)
    {
        int p;
        scanf("%d", &p);

        if(p==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }

        printf("Senha Invalida\n");
    }
}