 /* Q - 1   WAP Display This Information using printf
            1. Your Name
            2. Your Birth date
            3. Your Age
            4. Your Address  */

#include<stdio.h>
void main()
{
	printf("Name : Sandip \n");
	printf("DOB : 08/06/2003 \n");
	printf("AGE : 20");
  printf("Address : 9th floor,808 bhurj khalifa , Dubai");
}




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




/* Q - 3   WAP to find area of circle, rectangle and triangle */

#include<stdio.h>
void main()
    {
             const pi = 3.14;
             int r;
             int l;
             int w;
             int b;
             int h;
             float areaC;
             float areaR;
             float areaT;
	
	     printf("enter the value of radius : ");
	     scanf("%d",&r);
       
       printf("enter the value of length : ");
	     scanf("\n %d",&l);
	
	     printf("enter the value of width : ");
	     scanf("\n %d",&w);
       
       printf("enter the value of base : ");
	     scanf("\n%d",&b);
	
	     printf("enter the value of height : ");
	     scanf("\n%d",&h);
	
	     areaC = pi *r*r;
	     printf("\n area of circle is : %f",areaC);
       
       areaR = l*w;
	     printf("\n area of rectengle is : %f",areaR);
       
       areaT = 0.5*b*h;
	     printf("\n area of tringle is : %f",areaT);
       
     }	
     
 
 
 
 
 
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