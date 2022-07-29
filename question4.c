#include <stdio.h>

int isPrime(int n)
{

    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int nextPrime(int N)
{

    if (N <= 1)
        return 2;
    int prime = N;
    int found = 0;
    while (!found)
    {
        prime++;
        if (isPrime(prime))
            found = 1;
    }

    return prime;
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    printf("\nThe next prime number is %d", nextPrime(n));
    return 0;
}