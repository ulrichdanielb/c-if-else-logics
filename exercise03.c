#include <stdio.h>
int main ()
{
    int n;
    printf("write a value: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf ("Domingo");
                break;
    case 2:
        printf ("Segunda");
                break;
    case 3:
        printf ("terça");
                break;
    case 4:
        printf ("quarta");
                break;
    case 5:
        printf ("quinta");
                break;
    case 6:
        printf ("sexta");
                break;
    case 7:
        printf ("sábado");
                break;
    
    default: (printf("no valid number was added"));
    }
}
