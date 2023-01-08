#include<stdio.h>

void main()
{
    int a,b,n;

    printf("\nEnter the value :");
    scanf("%d",&n);

    for(a=1;a<=n;a++)
    {
        for(b=1;b<=n-a;b++)
        {
            printf(" ");
        }

        for(b=1;b<=a;b++)
        {
            printf("%d", b);
        }

        for(b=a-1;b>=1;b--)
        {
            printf("%d", b);
        }
        printf("\n");
    }
}
