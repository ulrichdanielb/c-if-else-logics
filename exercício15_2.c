#include <stdio.h>
int main ()
{
    float hourarrival, minutearrival, goodbyeminute, goodbyehour, hours, payment, hourspent, minutespent;
    int plus;
    printf("in which hour did you arrive? \n");
    scanf("%f", &hourarrival);
    printf("in which minute you arrived? \n");
    scanf("%f", &minutearrival);
    printf("when did you exit?(hour) \n");
    scanf("%f", &goodbyehour);
    printf("when did you exit?(minute) \n");
    scanf("%f", &minutearrival);

    if (goodbyehour > hourarrival || goodbyeminute > minutearrival)
    {
    minutespent = ((goodbyehour * 60) + (goodbyeminute)) - ((hourarrival * 60) + minutearrival);
    hourspent = minutespent - 241;
     if (minutespent > 0 && minutespent <= 120)
    {
     if (minutespent > 0 && minutespent < 61)
     {
        payment = 1.00;
        printf("your payment is %f", payment);
     }
     else if (minutespent > 61 && minutespent <= 120)
     {
        payment = 2.00;
        printf("your payment is: %f", payment);
     }
    }
     else if (minutespent > 120 && minutespent <= 240)
    {
        if (minutespent > 120 && minutespent <= 180)
        {
            payment = 2.00 + 1.40;
            printf("your payment is: %f", payment);
        }
        else if (minutespent > 180 && minutespent <= 240)
        { 
            payment = 2.00 + 2.80;
             printf("your payment is: %f", payment);
        }
    }
    else if (minutespent > 241)
    {   plus = hourspent/60;
        payment = 6.80 + (plus)*2.00;
         printf("your payment is: %f", payment);
    }
    
    }

}
