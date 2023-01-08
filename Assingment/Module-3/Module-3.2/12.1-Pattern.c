#include<stdio.h>

int main() 
{
	int i,a,n;

    printf("Enter number: ");
    scanf("%d",&n);

	for (i=1;i<=n;i++) 
    {
		for (a=1;a<=i;a++) 
        {
			printf("%d",a%2);
		}

		printf("\n");
	}

	return 0;
}
