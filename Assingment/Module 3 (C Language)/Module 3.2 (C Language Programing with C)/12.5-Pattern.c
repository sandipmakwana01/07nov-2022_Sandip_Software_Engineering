#include <stdio.h>

int main()

{

    int rows ;

    int i, a, b = 1;

    printf("Enter number: ");
    scanf("%d",&rows);

    for (i = 1; i <= rows; i++)
    {

        for (a = 1; a < i + 1; a++) 
        {

        printf("%d",b++); 

        }

        printf("\n");

    }

}