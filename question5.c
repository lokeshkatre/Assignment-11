#include <stdio.h>

void printPrime(int n)
{
    int i, j;
    int count = 1;
    for (i = 2; count <= n; i++)
    {
        for (j = 2; j <= i; j++)
            if (i % j == 0)
                break;

        if (i == j)
        {
            printf("%d ", i);
            count++;
        }
    }
}
int main()
{
    int n;
    printf("Enter no. of first prime numbers:");
    scanf("%d", &n);
    printPrime(n);
    return 0;
}