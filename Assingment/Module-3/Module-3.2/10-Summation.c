/*
Write a program make a summation of given number
*/

#include<stdio.h>  

int main()    
{    
    int a,b,sum=0;   

    printf("Enter a number:");    
    scanf("%d",&a);

    while(a>0)    
    {    
    b=a%10;    
    sum=sum+b;    
    a=a/10;    
    }

    printf("Sum is=%d",sum);

    return 0;  
}   
