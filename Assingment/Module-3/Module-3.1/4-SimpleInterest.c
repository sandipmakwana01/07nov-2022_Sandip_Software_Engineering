/* Q - 4   WAP to find simple interest */  
 
#include<stdio.h>
void main()
{
	float I;
	int principle;
	int time;
	float rate;
	
	printf("Enter principle : ");
  scanf("%d", &principle);

  printf("Enter time: ");
  scanf("%d", &time);

  printf("Enter rate of interst: ");
  scanf("%f", &rate);

  
  I = (principle * time * rate) / 100;

   
  printf("Simple Interest = %f", I);

}
