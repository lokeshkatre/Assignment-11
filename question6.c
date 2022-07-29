#include <stdio.h>
void printPrime(int n1, int n2)
{
    int i, j;
    printf("prime number between %d and %d are:\n",n1,n2);
    for (i = n1 + 1; i < n2; i++)
    {
        for (j = 2; j <= i; j++)
            if (i % j == 0)
                break;
        if (i == j)
            printf("%d", i);
    }
}
int main()
{
    int n1, n2;
    printf("Enter range to print prime number:");
    scanf("%d%d", &n1, &n2);
    if (n1 < n2)
        printPrime(n1, n2);
    else
        printPrime(n2, n1);
    return 0;
}