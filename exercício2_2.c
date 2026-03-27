#include <stdio.h>
int main ()
{
    int i, k, j;
    k = 3;
    j = 5;

     printf("write a value: ");
     scanf("%d", &i);

      while (k < i)
      {
        k = k + 3;
      }
      
       while (j < i)
      {
        j = j + 5;
      }

        if (k == i && j == i)
        {
        printf("your value is divisible by 15\n");
        }
         else
         {
         printf("your value isn't divisible by 15");
         }

}