#include <stdio.h>
int main()
{
    int grade, frequency;

    printf("what's your grade?");
    scanf("%d", &grade);
    
    printf("what's your frequency?");
    scanf("%d", &frequency);

    if (frequency < 75)
    {
        printf("failed");
    }
    else if (frequency >= 75 && grade < 3)
    {
        printf("failed");
    }
    else if ((frequency >= 75) && (grade >= 3) && (grade <= 7))
    {
        printf("Exam.");
    }
    else if ((frequency >= 75) && (grade <= 10) && (grade > 7))
    {
        printf("approved.");
    }
    
}
