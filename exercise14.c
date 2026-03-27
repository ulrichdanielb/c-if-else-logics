#include <stdio.h>
int main()
{
    int thisyear, year, month, day;
    printf("year of born: \n");
    scanf("%d", &year);
    printf("month of born: \n");
    scanf("%d", &month);
    printf("day of born: \n");
    scanf("%d", &day);
    thisyear = 2008;
    if (0 < day < 32 && 0 < month < 13 && thisyear - year >=0)
    {
        printf("valid date!");
    }
    else 
    {
        printf("invalid date");
    }
}
