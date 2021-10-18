// write a program to read an integer number and find the sum of its digits using recursive function.

#include <stdio.h>
int sum(int n);

int main()
{

    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("the sum is %d", sum(n));

    return 0;
}

int sum(int n)
{ //using function only
    //int sum_integer = 0;

    // while (n != 0)
    // {
    //     sum_integer = sum_integer + n % 10;
    //     n = n / 10;
    // }

    //using recursion

    if (n != 0)
    {
        n = n % 10 + sum(n / 10);
    }

    return n;
}