// 5. Write a recursive function to print first N even natural numbers//
#include <stdio.h>
void Even(int);
int main()
{
    int x;
    printf("Enter any Number: ");
    scanf("%d", &x);
    Even(2 * x);
}
void Even(int a)
{
    if (a == 0)
    {
        return;
    }
    Even(a - 2);
    printf("%d ", a);
}