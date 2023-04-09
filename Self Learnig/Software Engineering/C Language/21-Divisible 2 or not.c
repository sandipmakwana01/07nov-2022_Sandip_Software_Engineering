/* Write a program to chack if a number is divisible by 2 or not.*/

#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("%d", a % 2 == 0);
    return 0;
}