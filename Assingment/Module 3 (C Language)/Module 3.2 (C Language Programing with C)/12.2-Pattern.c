#include <stdio.h>

int main ()

{
    char ch = 'A';
    int n,a,b;

    printf("Enter number: ");
    scanf("%d",&n);

    for ( a = 1; a <= n; a++) 
    {
        for ( b = 1; b <= a; b++) 
        {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

  return 0;

}