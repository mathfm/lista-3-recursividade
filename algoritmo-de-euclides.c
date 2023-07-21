#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/552?quizId=8314

int mdc(int n1, int n2) // calculo do mdc
{
    int resto = n1 % n2;

    if (resto == 0)
    {
        return n2;
    }

    mdc(n2, resto);
}

void contador(int casos, int indice) // contar o numero de casos
{
    if (indice > casos)
    {
        return;
    }
    int a, b;
    scanf("%d%d", &a, &b);
    printf("MDC(%d,%d) = %d\n", a, b, mdc(a, b));

    indice++;
    contador(casos, indice);
}

int main()
{
    int numero_casos;
    scanf("%d", &numero_casos);
    contador(numero_casos, 1);

    return 0;
}
