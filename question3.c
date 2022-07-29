#include <stdio.h>
int primeCheck(int n)
{
    int flag = 1;
    if (n == 2)
        return flag;
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                flag = 0;
        }
        return flag;
    }
}
int main()
{
    int n ;
    printf("Enter number:");
    scanf("%d",&n);
    if(primeCheck(n)==1)
    printf("\nNumber is prime number");
    else
    printf("\nNumber is not prime number");
    return 0;
}