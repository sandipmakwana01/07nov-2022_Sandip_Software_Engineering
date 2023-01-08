/*
WAP to print number in reverse order
*/

#include <stdio.h>

int main()
{

    int i, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &i);

    while (i != 0)
    {
        remainder = i % 10;
        reverse = reverse * 10 + remainder;
        i /= 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}
