#include <stdio.h>
int main()
{
    int n, pay, hours;
    printf("What's your level?");
    scanf("%d", &n);
    printf("How many hours you work?");
    scanf("%d", &hours);

    if (n == 1)
    {
        pay = 12 * hours;
        printf("your payment is: %d", pay);
    }
    else if (n == 2)
    {
        pay = 17 * hours;
        printf("your payment is: %d", pay);
    }
    else
    {
        pay = 25 * hours;
        printf("your payment is: %d", pay); 
        }
}
