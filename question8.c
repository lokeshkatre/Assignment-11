#include <stdio.h>
int binomialCoeff(int i, int j)
{
    int coeff = 1;
    if (j > i - j)
        j = i - j;
    for (int k = 0; k < j; ++k)
    {
        coeff *= (i - k);
        coeff /= (k + 1);
    }

    return coeff;
}

void pascalTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("%d ", binomialCoeff(i, j));
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter no. of rows in pascal's triangle:");
    scanf("%d", &n);
    pascalTriangle(n);
    return 0;
}