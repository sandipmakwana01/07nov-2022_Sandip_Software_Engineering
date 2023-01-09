/*
check the no is Armstrong no. or not
*/
#include<stdio.h>  

int main()    
{    
    int n,r,sum=0,i;

    printf("enter the number :");    
    scanf("%d",&n); 

    i=n; 

    while(n>0)    
    {    
    r=n%10;    
    sum=sum+(r*r*r);    
    n=n/10;    
    } 

    if(i==sum)    
    printf("armstrong number ");    
    else    
    printf("not armstrong number");  

    return 0; 

}   
