#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/1290?quizId=8314

int rick(int r, int i, int t)
{
    if (i == t)
    {
        return r;
    }
    else
    {
        if (i % 2 == 0)
        {
            return rick(r + 3, i + 1, t);
        }
        else
        {
            return rick(r + (r % 5), i + 1, t);
        }
    }
}

int main()
{
    int n, t, r;
    scanf("%d%d", &n, &t);
    r = rick(n, 0, t);
    printf("%d\n", r);

    return 0;
}
/*/
exemplo;
n = 0
t equivale a t1 t2... etc
exemplo 2
t3
n= 0
ir
pode somar com 3 ou dividir e pegar o resto da divis�o por 5.
quando t e par, a soma com 3, quando e impar, pega o resto da divis�o por 5


/*/