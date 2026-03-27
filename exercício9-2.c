#include <stdio.h>
int main ()
{
    int man1, man2, woman1, woman2, sum, product;

    printf("man, print your age.\n");
    scanf("%d", &man1);

    printf("man, print your age.\n");
    scanf("%d", &man2);

    printf("woman, print your age.\n");
    scanf("%d", &woman1);

    printf("woman, print your age.\n");
    scanf("%d", &woman2);
    
    if (man1 < man2 && woman1 < woman2)
     {
        sum = man1 + woman2;
        product = man2*woman1;
        printf("the sum is: %d", sum);
        printf("the product is: %d", product);
     }
    
     if (man2 < man1 && woman1 < woman2)
     {
        sum = man2 + woman2;
        product = man1*woman1;
        printf("the sum is: %d", sum);
        printf("the product is: %d", product);

     }

     if (man1 < man2 && woman2 < woman1)
     {
         product = man2*woman2;
        sum = man1 + woman1;
        printf("the sum is: %d", sum);
        printf("the product is: %d", product);

     }

     if (man2 < man1 && woman2 < woman1)
     {
        sum = man2 + woman1;
        product = man2*woman1;
        printf("the sum is: %d", sum);
        printf("the product is: %d", product);

     }



}