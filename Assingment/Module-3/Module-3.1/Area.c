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
