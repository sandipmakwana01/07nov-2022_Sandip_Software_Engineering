/*Write a program to check if a number is odd or even.*/

#include<stdio.h>

int main()
{
    //even-->1
    //odd -->0
    int a ;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("%d",a%2==0);
    return 0;
}