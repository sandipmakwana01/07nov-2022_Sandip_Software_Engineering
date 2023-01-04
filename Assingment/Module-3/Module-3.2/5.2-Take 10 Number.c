#include <stdio.h>
void main() 
{

    int arr[10];
    int i,e=0,o=0;
    int even=0,odd=0;

 
    printf("\n Enter 10 numbers: \n\n");

         for(i=0; i<10; i++)
           {
            printf("Enter no. %d   : ",i+1);
            scanf("%d",&arr[i]);
             if(arr[i]%2==0)
             {
                
             e++;
             even += arr[i];
             }
             else
             {
             o++;
             odd += arr[i];
             }      
           }
        
    printf("even numbers are: %d",e);
    printf("\nodd numbers are: %d",o);
    printf("\nSum of even: %d",even);
    printf("\nSum of odd: %d",odd);
}
