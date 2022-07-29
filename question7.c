#include <stdio.h>
void Fibo(int n)
{
    int fib, second = 1, first = 0;
    printf("%d ",second);
    for (int i = 1; i < n; i++)
    {
        fib = second + first;
        printf("%d ", fib);
        first = second;
        second = fib;
    }
}
int main()
{
    int n;
    printf("Enter no. of terms you want to print in fibonacci series:");
    scanf("%d", &n);
    Fibo(n);
    return 0;
}