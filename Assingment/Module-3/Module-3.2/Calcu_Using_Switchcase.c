/* WAP to make simple calculator (operation include Addition, Subtraction,
   Multiplication, Division, modulo) */
   
#include<stdio.h>
void main()
{
	int a,b;
	char o;
	
	printf("\n What do you want to do...\n Please enter your choice from + , - , * , / , % =");

	printf("\n Enter a & b= ");
	scanf("%d %c %d",&a,&o,&b);
	
	switch(o)
	{
		case '+':
			printf("Addition = %d",a+b);
			break;
		case '-':
			printf("Subtraction = %d",a-b);
			break;
		case '*':
			printf("Multiplication = %d",a*b);
			break;
		case '/':
			printf("division = %d",a/b);
			break;
		case '%':
			printf("modulo = %d",a%b);
			break;
	}
}
