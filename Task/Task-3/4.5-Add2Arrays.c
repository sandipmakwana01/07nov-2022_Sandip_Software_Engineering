/*
Addition of two arrays without assigning direct dynamic value to an array variable
*/
#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;

    int* d1;
    int* d2;
    int* d3;

    printf("Enter the j for dynamic arrays: ");
    scanf("%d", &j);

    d1 = (int*)malloc(j * sizeof(int));
    d2 = (int*)malloc(j * sizeof(int));
    d3 = (int*)malloc(j * sizeof(int));

    printf("Enter The First Array: ");

    for (i = 0; i < j; i++)
        scanf("%d", d1 + i);

    printf("Enter The Second Array: ");

    for (i = 0; i < j; i++)
        scanf("%d", d2 + i);

    for (i = 0; i < j; i++)
        *(d3 + i) = *(d1 + i) + *(d2 + i);

    printf("Result of Addition: \n");

    for (i = 0; i < j; i++)
        printf("%d ", *(d3 + i));

    printf("\n");

    return 0;
}
