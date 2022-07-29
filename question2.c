#include<stdio.h>
int HCF(int n1,int n2)
{
    int hcf ;
    int min;
    min=(n1<n2)?n2:n1;
    for (int i = 1; i <=min; i++)
    {
        if(n1%i==0 && n2%i==0)
        hcf=i;
    }
    return hcf;
}
int main()
{
    int n1,n2;
    printf("Enter numbers :");
    scanf("%d%d",&n1,&n2);
    printf("HCF of %d and %d is %d",n1,n2,HCF(n1,n2));
    return 0;
}