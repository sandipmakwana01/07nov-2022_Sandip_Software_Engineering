 /* Q - 2   WAP to make Simple calculator (to make addition, subtraction,
            multiplication, division and modulo)  */
                                                            
#include<stdio.h>
void main ()
{
	int A ;
	int B ;
	
	printf("Enter the value of A=");
	scanf("%d",&A);
	printf("Enter the value of B=");
	scanf("%d",&B);
	
	printf("A + B = %d \n",A+B);
	printf("A - B = %d \n",A-B);
  printf("A * B = %d \n",A*B);
	printf("A / B = %d \n",A/B);
  printf("A % B = %d \n",A%B);	
}