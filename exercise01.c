#include <stdio.h>
int main ()
{
    float r, i;
    
    printf("write a value: ");
    scanf("%f", &r);

     if (r > 0)
     {
         i = 3.14 * r * r;
         printf("your area is: %f", i);
     }
      else 
      {
        printf ("your radius isn't valid.");
      }
}
