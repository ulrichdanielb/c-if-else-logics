#include <stdio.h>
int main ()
{
    int total, product, type;

    printf("what's the price of the product?\n");
    scanf("%d", &product);
    printf("what's the type of payment? Full + money = 1, Full + credit = 2, Full + 2x = 3, 2x = 4\n");
    scanf("%d", &type);

    if (type == 1)
    {
        total = product - product*0.10;
        printf("your total is: %d", total);
    }
    else if (type == 2)
    {
        total = product - product*0.10;
        printf("your total is: %d", total);
    }
    else if (type == 3)
    {
        total = product = product;
        printf("your total is: %d", total);
    }
    else if (type == 4)
    {
        total = product + product*0.10;
        printf("your total is: %d", total);
    }
return 0;
}