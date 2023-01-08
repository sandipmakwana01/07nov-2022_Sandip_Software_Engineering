#include<stdio.h>

int main()
{
    int i, a , b;

    printf("Enter number : ");
    scanf("%d",&i);

    for(a = 1; a <= i; a++)
    {
        for(b = 1; b <= a;  b++)
        {
        printf("*");
        }

        printf("\n");

    }

    for(a = i; a >= 1; a--)
    {
        for(b = 1; b <= a; b++)
        {
        printf( "*");
        }

        printf("\n");
    }

    return 0;
}
