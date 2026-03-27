#include <stdio.h>
int main()
{
    int value, rest, a, x, part10, part50, part5, part1, part100, total;

    printf("write a value: \n");
    scanf("%d", &value);

      if (value >= 100)
      {
       part100 = value/100;
       rest = value % 100;
       printf("The total of 100 dolar bills is: %d\n", part100);

       if (rest >= 50)
       {
        part50 = rest/50;
        rest = rest % 50;
        printf("The total 50 dollar bills is: %d\n", part50);

        if (rest >= 10)
        {
            part10 = rest/10;
            rest = rest%10;
            printf("The toral 10 dolar bills is: %d\n", part10);

            if (rest >= 5)
            {
                part5 = rest/5;
                rest = rest%5;
                printf("The total 5 dolar bills is: %d\n", part5);
                printf("The total 1 dolar bills is: %d\n", rest);
            }
        }
        else if(rest >= 5)
            {
                part5 = rest/5;
                rest = rest%5;
                printf("The total 5 dolar bills is: %d\n", part5);
                printf("The total 1 dolar bills is: %d\n", rest);
            }
        else 
        {
            printf("The total 1 dolar bills is: %d\n", rest);
        }

       }
       else if (rest >= 10)
        {
            part10 = rest/10;
            rest = rest%10;
            printf("The toral 10 dolar bills is: %d\n", part10);

            if (rest >= 5)
            {
                part5 = rest/5;
                rest = rest%5;
                printf("The total 5 dolar bills is: %d\n", part5);
                printf("The total 1 dolar bills is: %d\n", rest);
            }
        }
        else if (rest >= 5)
            {
                part5 = rest/5;
                rest = rest%5;
                printf("The total 5 dolar bills is: %d\n", part5);
                printf("The total 1 dolar bills is: %d\n", rest);
            }
        else 
        {
            printf("The total 1 dolar bills is: %d\n", rest);
        }
      }
      else if (value >= 50)
       {
        part50 = value/50;
        rest = value % 50;
        printf("The total 50 dollar bills is: %d\n", part50);

        if (rest >= 10)
        {
            part10 = rest/10;
            rest = rest%10;
            printf("The toral 10 dolar bills is: %d\n", part10);

            if (rest >= 5)
            {
                part5 = rest/5;
                rest = rest%5;
                printf("The total 5 dolar bills is: %d\n", part5);
                printf("The total 1 dolar bills is: %d\n", rest);
            }
        }
        else if (rest >= 5)
            {
                part5 = rest/5;
                rest = rest%5;
                printf("The total 5 dolar bills is: %d\n", part5);
                printf("The total 1 dolar bills is: %d\n", rest);
            }
        else
        {
            printf("The total 1 dolar bills is: %d\n", rest);
        }
       }

      else if (value >= 10)
        {
            part10 = value/10;
            rest = value%10;
            printf("The toral 10 dolar bills is: %d\n", part10);

            if (rest >= 5)
            {
                part5 = rest/5;
                rest = rest%5;
                printf("The total 5 dolar bills is: %d\n", part5);
                printf("The total 1 dolar bills is: %d\n", rest);
            }
            else 
            {
                printf("The total 1 dolar bills is: %d\n", rest);
            }
        }
        else if (value >= 5)
            {
                part5 = value/5;
                rest = value%5;
                printf("The total 5 dolar bills is: %d\n", part5);
                printf("The total 1 dolar bills is: %d\n", rest);
            }
        else
        {
            rest = value/1;
            printf("The total 1 dolar bills is: %d\n", rest);
        }


    }
