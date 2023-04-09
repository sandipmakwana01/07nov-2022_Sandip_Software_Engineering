/* WAP to find number is even or odd using ternary operator */

#include<stdio.h>
void main()
{
	int no;
	
	printf("\n Enter number = ");
	scanf("%d",&no);
	
	(no % 2 == 0) ? (printf("\n Number is Even....")) : (printf("\n Number is odd"));
}