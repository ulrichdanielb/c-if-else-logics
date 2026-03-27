#include <stdio.h>
int main ()
{
    int operation, num1, num2, total;

    printf("what operation you desire? sum = 1, subtraction = 2, divison = 3, multiplication = 4");
    scanf("%d", &operation);
    printf("write your number: ");
    scanf("%d", &num1);
    printf("write your number: ");
    scanf("%d", &num2);

    if (operation == 1)
    {
        total = num1 + num2;
        printf("your result is: %d", total);
    }
    else if (operation == 2)
    {
        total = num1 - num2;
        printf("your result is: %d", total);
    }
    else if (operation == 3 && num2 > 0)
    {
        total = num1 / num2;
        printf("your result is: %d", total);
    }
    else 
    {
        total = num1 * num2;
        printf("your result is: %d", total);
    }

}
