//1. Write a recursive function to calculate sum of first N natural numbers//
#include<stdio.h>
int sum(int);
int main()
{
    int x;
    printf("Enter any Number: ");
    scanf("%d",&x);
    printf("Sum of first %d natural numbers is %d",x,sum(x));
}
int sum(int a)
{
    if (a==0)
    {
        return 0;
    }
    a=sum(a-1)+a;
    return a;

    
}
