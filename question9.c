#include<stdio.h>
void square(int n)
{
    int square=n*n;
    printf("square of %d is %d",n,square);
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    square(n);
    
    return 0;
}