/* WAP to swap two numbers without using third variable */

#include<stdio.h>
void main()
{
	int a,b;
	
	printf("\n Enter a = ");
	scanf("%d",&a);
	
	printf("\n Enter b = ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n After swap numbers\n a = %d \n b = %d ",a,b);
}