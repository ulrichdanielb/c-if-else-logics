#include <stdio.h>
int main ()
{
    int side1, side2, side3;

    printf("write the value of a side: ");
    scanf("%d", &side1);
    printf("write the value of a side: ");
    scanf("%d", &side2);
    printf("write the value of a side: ");
    scanf("%d", &side3);

    if (side1 + side2 > side3 && side3 + side1 > side2 && side3 + side2 > side1)
    {
     if (side1 == side2 && side2 == side3)
     {
     printf("your triangle is equilateral!");
     }
     else if ((side1 != side2 && side2 == side3) || (side2 != side3 && side3 == side1) || (side3 != side1 && side1 == side2))
     {
     printf("your triangle is isoceles!");
     }
     else if (side1 != side2 && side2 != side3)
     {
     printf("your triangle is escalen!");
     }
    }
    else 
    {
        printf("your triangle doesn't exist.");
    }
}