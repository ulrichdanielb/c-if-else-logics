#include <stdio.h>
int main ()
{
    int number, ind, k, part1000, part100, part10, part1, rest, end, root, p;
    float approx, j, i, l, one;
    part1000 = 0;
    part100 = 0;
    part10 = 0;
    part1 = 0;
    

    printf("write a number: ");
    scanf("%d", &number);
    p = 0;

    while (ind < number)  // gera a raiz mais acima ou a raiz exata.
    {
        ind = p * p;
        if (ind < number) 
        {
        p = p + 1;
        }
    }
    if (ind == number)
    {
        printf("%d is the exact square root\n", p);
    }
    else 
    {
        j = p-1;
        i = ind;
        l = number;
        one = 1;
        approx = (j) + ((l - ((j)*(j))) * (one / ((i) - ((j)*(j))))); // raiz quadrado menor + (número - quadrado menor) * 1 / (quadrado maior - quadrado menor)
        printf("your approximate square root is: %f\n", approx); // dava pra fazer mais simples mas quis tentar assim!! approx é basicamente = p-1.
    }
    if (number > 1000)
    {
    part1000 = number/1000;
    rest = number % 1000;
      if (rest > 100)
      {
        part100 = rest/100;
        rest =  rest % 100;
          if (rest > 10)
          {
            part10 = rest/10;
            rest = rest % 10;
                part1 = rest;
          }
      }
      else if (rest > 10)
      { 
        part100 = 0;
        part10 = rest/10;
        rest = rest % 10;
            part1 = rest;
      }
      else 
      {
        part100 = 0;
        part10 = 0;
        part1 = rest;
      }
    }
     root = (p);
    end = (part1000*10 + part100) + (part10*10 + part1); // 2025/100 = 20 e 2025%100 = 25. Seria mais simples fazer assim mas agora já foi :P
    if (end == root)
    {
        printf("the sum of dezens and the square root are the same.\n");
    }
    else
    {
        printf("the sum of dezens and the square root are different.\n");
    }

}
