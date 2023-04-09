/*
Write a program to find out the max from given number
*/
#include <stdio.h>
int main()
{
	int A, B, C;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &A, &B, &C);

	if (A >= B) 
    {
		if (A >= C)
			printf("%d is the Max number.", A);
		else
			printf("%d is the Max number.", C);
	}
	else 
    {
		if (B >= C)
			printf("%d is the Max number.", B);
		else
			printf("%d is the Max number.", C);
	}

	return 0;
}
