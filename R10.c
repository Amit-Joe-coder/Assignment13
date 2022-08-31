// 10. Write a program in C to calculate the power of any number using recursion//
#include <stdio.h>
int power(int, int);
int main()
{
    int x, y;
    printf("Enter any Number: ");
    scanf("%d %d", &x, &y);
    printf("power of %d is %d", x, power(x, y));
}
int power(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    return power(a, b - 1) * a;
}