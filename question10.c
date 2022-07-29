#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    if (n == 0)
        return fact;
    else
    {
        for (int i = 1; i <= n; i++)
            fact = fact * i;
            return fact;
    }
}
int SeriesSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + factorial(i) / i;
    }
    return sum;
}
int main()
{
    
    int sum = SeriesSum(5);
    printf("The sumation of series is %d",sum);
    return 0;
}