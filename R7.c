//7. Write a recursive function to print squares of first N natural numbers//
#include<stdio.h>
void sqt(int);
int main()
{
    int x;
    printf("Enter any Number: ");
    scanf("%d",&x);
    sqt(x);
}
void sqt(int a)
{
    if(a==0)
    {
        return;
    }
    sqt(a-1);
    printf("%d ",a*a);
}