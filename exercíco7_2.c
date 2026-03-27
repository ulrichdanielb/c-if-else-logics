#include <stdio.h>
int main()
{
    int payment, paid, change, calc, rest, rest2, rest3, rest4;

    printf("what's the value of the payment?");
    scanf("%d", &payment);
    printf("how much you paid?");
    scanf("%d", &paid);
    
    if (paid < payment)
    {
        printf("your purchase isn't valid");
    }
    else
    {
        change = paid - payment;
    }
    
    calc = change/100;
    rest = change % 100;

    if (rest == 0)
    {
        printf("your total of 100 notes is: %d\n", calc);
    }

    if (rest > 0)
    {
        printf("your total of 100 notes is: %d\n", calc);
        calc = rest/10;
        rest2 = rest%10;
        if (rest2 == 0)
        {
            printf("your total of 10 notes is: %d\n", calc);
        }
        else
        {
            printf("your total of 10 notes is: %d\n", calc);
            calc = rest2/2;
            rest3 = rest2%2;
            if (rest3 == 0)
            {
            printf("your total of 2 notes is: %d\n", calc);
            }
            else
            {
                printf("your total of 2 notes is: %d\n", calc);
             calc = rest3/1;
             printf("your total of 1 notes is: %d\n", calc);
            }

        }
    }
    
}