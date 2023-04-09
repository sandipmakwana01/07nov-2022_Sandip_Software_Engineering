/*
Write a program you have to make a summation of first and last Digit.
*/

#include <stdio.h>

int main()
{
    int n, sum=0;
    int fd, ld;

    printf("Enter number to make a summation of first and last digit : ");
    scanf("%d", &n);

    ld = n % 10;
 
    while(n >= 10)
    {
        n = n / 10;
    }

    fd = n;
    sum = fd + ld;

    printf("Sum of first and last digit = %d", sum);
    
    return 0;
}