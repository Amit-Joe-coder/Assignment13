// 9. Write a program in C to count the digits of a given number using recursion.//
#include <stdio.h>
int count_digit(int);
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    printf("digits present in %d is %d", x, count_digit(x));
}
int count_digit(int a)
{
    if (a == 0)
    {
        return 0;
    }
    return count_digit(a / 10)+1;
}