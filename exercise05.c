#include <stdio.h>
int main()
{
    int total, meal, candy, drink;
    printf("what's you meal? 1 = vegetarian, 2 = grilled fish, 3 = grilled chickend, 4 = meat\n");
    scanf("%d", &meal);
    total = 0;

    switch (meal)
    {
    case 1:
    total = total + 380;
        break;
    case 2:
    total = total + 320;
        break;
    case 3:
    total = total + 340;
        break;

    case 4:
    total = total + 560;
        break;


    default: (printf("no valid number was added"));
    }


    printf("what's you candy? 1 = fuit salad, 2 = pudim, 3 = jelly, 4 = chocolate\n");
    scanf("%d", &candy);
    switch (candy)
    {
        case 1:
        total = total + 95;
            break;

        case 2:
        total = total + 180;
            break;

        case 3:
        total = total + 50;
            break;

        case 4:
        total = total + 260;
            break;

        
        default: (printf("no valid number was added"));
    }

    printf("what's your drink? tea = 1, orange juice = 2, melon juice = 3, soda = 1\n");
    scanf("%d", &drink);
    switch (drink)
    {
        case 1:
        total = total + 2;
            break;

        case 2:
        total = total + 110;
            break;

        case 3:
        total = total + 90;
            break;

        case 4:
        total = total + 1;
            break;


    }
    
    printf("your total is: %d", total);
    return 0;


}

