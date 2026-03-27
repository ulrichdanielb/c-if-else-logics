#include <stdio.h>
int main ()
{
    int MT, grade1, grade2, grade3, ME, number;

    printf("what's your number of matricule?");
    scanf("%d", &number);
    printf("what's your first grade? ");
    scanf("%d", &grade1);
    printf("what's your second grade? ");
    scanf("%d", &grade2);
    printf("what's your third grade? ");
    scanf("%d", &grade3);
    printf("what's your ME grade? ");
    scanf("%d", &ME);

    MT = (grade1 + grade2 + grade3 + ME)/4;

    if (MT >= 90)
    {
        printf ("your concept is A, approved!");
        printf("%d, %d, %d, %d, %d", grade1, grade2, grade3, ME, MT);
                printf ("your number of matricule: %d", number);


    }
    else if (MT >=  75)
    {
        printf ("your concept is B, approved!");
                printf("%d, %d, %d, %d, %d", grade1, grade2, grade3, ME, MT);

                printf ("your number of matricule: %d", number);

    }
    else if (MT >= 60)
    {
        printf ("your concept is C, approved!");
                printf("%d, %d, %d, %d, %d", grade1, grade2, grade3, ME, MT);

                printf ("your number of matricule: %d", number);


    }
    else if (MT >= 40)
    {
        printf("your concept is D, try again.");
                printf("%d, %d, %d, %d, %d", grade1, grade2, grade3, ME, MT);

                printf ("your number of matricule: %d", number);


    }
    else if (MT < 40)
    {
        printf ("your concept is E. Really?");
                printf("%d, %d, %d, %d, %d", grade1, grade2, grade3, ME, MT);

        printf ("your number of matricule: %d", number);
    }
}