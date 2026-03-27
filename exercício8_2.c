#include <stdio.h>
int main()
{
    float height, weight, IMC;

    printf("what's your height?");
    scanf("%f", &height);
    printf("what's your weight?");
    scanf("%d", &weight);

    IMC = weight / (height*height);

    if (IMC < 18.5)
    {
        printf("you are underweight.");
    }
    else if (IMC < 25)
    {
        printf("You are in normal weight.");
    }
    else if (IMC < 30)
    {
        printf("you are overweight.");
    }
    else if (IMC > 30)
    {
        printf("you are obese.");
    }
 return 0;
}