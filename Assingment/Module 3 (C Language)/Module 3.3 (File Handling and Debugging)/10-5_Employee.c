/*
    Write a program of structure for five employee that provides the following
    information -print and display empno, empname, address and age 
*/

#include <stdio.h>

 
typedef struct
{
    char empname[30],address[50];
    int empno,age;
    
} Employee;
 
int main()
{
    
    int n=5;

    Employee employees[n];
 
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++)
    {
        printf("Employee %d:- \n",i+1);

        printf("Number: ");
        scanf("%d",&employees[i].empno);

        printf("Name: ");
        scanf("%s",&employees[i].empname);

        printf("Address: ");
        scanf("%s",&employees[i].address);

        printf("Age: ");
        scanf("%d",&employees[i].age);

        char ch = getchar();
 
        printf("\n");
    }
 
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++)
    {

        printf("Number \t: ");
        printf("%d \n",employees[i].empno);

        printf("Name \t: ");
        printf("%s \n",employees[i].empname);

        printf("Address : ");
        printf("%s \n",employees[i].address);

        printf("Age \t: ");
        printf("%d \n",employees[i].age);
 
        printf("\n");
    }
 
    return 0;
}