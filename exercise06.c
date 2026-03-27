#include <stdio.h>
int main()
{
    int total, salary, bonus;

    printf("what's your salary?");
    scanf("%d", &salary);
    printf("what's your bonus?");
    scanf("%d", &bonus);
    total = salary*0.30;
    if (bonus > total)
    {
        printf("you cannot have your bonus");
    }
    else 
    {
        printf("your bonus is: %d!", bonus);
    }

}
