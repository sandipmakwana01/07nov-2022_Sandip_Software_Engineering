#include<stdio.h>
void main()
{
    int a[3][3],b[3][3];
    int i, j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\nEnter the value of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\nEnter the value of b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nmatrix of a :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrix of b :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\naddition of matrix :\n");
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
     printf("\nSubtraction of matrix :\n");
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
     printf("\nMultiplication of matrix :\n");
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]*b[i][j]);
        }
        printf("\n");
    }
     printf("\nDivition of matrix :\n");
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]/b[i][j]);
        }
        printf("\n");
    }
}
