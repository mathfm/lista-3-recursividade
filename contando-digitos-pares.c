#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/405?quizId=8314

void ContaDigitosPares(int nu1, int cont)
{
    int digito;

    digito = nu1 % 10;

    if (nu1 <= 0)
    {
        printf("\n%d\n", cont);

        return;
    }

    else if (digito % 2 == 0)
    {
        cont++;

        ContaDigitosPares(nu1 / 10, cont);
    }
    else
    {

        ContaDigitosPares(nu1 / 10, cont);
    }
}

int main()
{
    int n1, npar = 0;

    scanf("%d", &n1);

    ContaDigitosPares(n1, npar);
}
