#include <stdio.h>
int main ()
{
    int salary, years;

    printf("How much is your current salary? \n");
    scanf("%d", &salary);
    printf("For how many years have you been working here? ");
    scanf("%d", &years);

    if (salary <= 500)
    {
        salary = salary + salary * 0.25;
    }
    else if (salary <= 1000)
    {
        salary = salary + salary * 0.20;
    }
    else if (salary <= 1500)
    {
        salary = salary + salary * 0.15;
    }
    else if (salary <= 2000)
    {
        salary = salary + salary * 0.10;
    }
    else if (salary > 2000)
    {
        salary = salary;
    }

    if (years < 1)
    {
        salary = salary;
    }
    else if (years >= 1 && years <= 3)
    {
        salary = salary + 300;
    }
    else if (years >= 4 && years <= 6)
    {
        salary = salary + 200;
    }
    else if (years >= 7 && years <= 10)
    {
        salary = salary + 300;
    }
    else 
    {
        salary = salary + 500;
    }
    printf("your salary is: %d", salary);
    return 0;
}