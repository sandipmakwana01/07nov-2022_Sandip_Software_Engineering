/*
Find the GCD of two intervals.
*/
#include <stdio.h>  

int main()  
{  
    
    int a, b, i; 
    int GCD_num;  

    printf ( " Enter any two numbers: \n ");  
    scanf ( "%d %d", &a, &b);   
      
   
    for( i = 1; i <= a && i <= b; ++i)  
    {  
        if (a % i ==0 && b % i == 0)  
            GCD_num = i; 
    }  
   
    printf (" GCD of two numbers %d and %d is %d.", a, b, GCD_num);  

    return 0;  
}  
