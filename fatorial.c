#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/24?quizId=8314

int faotrial(int n1)
{
    if (n1 == 0 || n1 == 1)
    {
        return 1;
    }
    else
    {
        return n1 * faotrial(n1 - 1);
    }
}

int resultados(int nu1)
{

    if (nu1 < 0)
    {
        return 0;
    }
    else
    {
        int b;

        b = faotrial(nu1);

        printf("%d\n", b);

        scanf("%d", &nu1);

        return resultados(nu1);
    }
}

int main()
{
    int n1, n2;

    scanf("%d", &n1);

    resultados(n1);

    return 0;
}