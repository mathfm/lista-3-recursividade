#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/352?quizId=8314

int mdc(int n1, int n2)
{
    if (n2 == 0)
        return n1;
    {
        return mdc(n2, n1 % n2);
    }
}

int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("%d", mdc(n1, n2));
    return mdc(n2, n1 % n2);

    return 0;
}