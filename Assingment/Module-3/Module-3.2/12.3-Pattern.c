#include<stdio.h>

int main()
{
    int n, i, a, b;

    printf("Enter number : ");
    scanf("%d",&n);

    for(a = 1; a <= n; a++)
    {

    for(i = a; i < n; i++)
    printf(" ");

    for(b = 1; b <= a; b++)
    printf("* ");

    printf("\n");
    }

    return 0;

}
