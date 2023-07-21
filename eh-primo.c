#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/972?quizId=8314

int aux(int n, int j, int i) // auxilair
{
    if (j > n / 2 || i > 1)
    {
        if (i == 1)
            return 1;
        else
            return 0;
    }
    else
    {
        if (n % j == 0)
        {
            i = j;
        }
        return aux(n, j + 1, i);
    }
}

int primo(int x) // fun��o primo
{
    return aux(x, 1, 0);
}

int cont(int conta)
{
    int n2;
    n2 = conta;
    if (n2 <= -1)
    {
        return 0;
    }
    else
    {
        printf("%d\n", primo(n2));
        scanf("%d", &conta);
        return cont(conta);
    }
}

int main()
{
    int n1;
    scanf("%d", &n1);
    cont(n1);

    return 0;
}