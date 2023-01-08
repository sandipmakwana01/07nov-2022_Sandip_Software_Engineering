#include<stdio.h>

int main()
{
    int n, a, b;

    printf("Enter number: ");
    scanf("%d",&n);

    for(a = 1; a <= n; a++)
    {

        for(b = 1; b <= a; b++)
        {
        printf("%c",'A' + b -1);
        }

        printf("\n");

    }

    return 0;
}
