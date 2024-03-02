#include <stdio.h>

int main()
{
    double salary, newSalary;
    scanf("%lf", &salary);

    if (salary >= 0 && salary <= 400)
    {
        newSalary = salary + ((15.0 / 100) * salary);
        printf("Novo salario: %.2lf\n", newSalary);
        printf("Reajuste ganho: %.2lf\n", newSalary - salary);
        printf("Em percentual: 15 %\n");
    }
    else if (salary > 400 && salary <= 800)
    {
        newSalary = salary + ((12.0 / 100) * salary);
        printf("Novo salario: %.2lf\n", newSalary);
        printf("Reajuste ganho: %.2lf\n", newSalary - salary);
        printf("Em percentual: 12 %\n");
    }
    else if (salary > 800 && salary <= 1200)
    {
        newSalary = salary + ((10.0 / 100) * salary);
        printf("Novo salario: %.2lf\n", newSalary);
        printf("Reajuste ganho: %.2lf\n", newSalary - salary);
        printf("Em percentual: 10 %\n");
    }
    else if (salary > 1200 && salary <= 2000)
    {
        newSalary = salary + ((7.0 / 100) * salary);
        printf("Novo salario: %.2lf\n", newSalary);
        printf("Reajuste ganho: %.2lf\n", newSalary - salary);
        printf("Em percentual: 7 %\n");
    }
    else
    {
        newSalary = salary + ((4.0 / 100) * salary);
        printf("Novo salario: %.2lf\n", newSalary);
        printf("Reajuste ganho: %.2lf\n", newSalary - salary);
        printf("Em percentual: 4 %\n");
    }
}
