/*
    WAP to reverse a string and check that the string is palindrome or not 
*/
#include <stdio.h>
#include <string.h>
  
int main() 
{
   char inputArray[100], reversedArray[100];
 
   printf("Enter the string\n");
   scanf("%s", inputArray);
   strcpy(reversedArray, inputArray);
   strrev(reversedArray);
    

   if(strcmp(inputArray, reversedArray) == 0 )
      printf("%s is a palindrome.\n", inputArray);
   else
      printf("%s is not a palindrome.\n", inputArray);
       
   return 0;
}