/*
    Write a program of structure employee that provides the following
    information -print and display empno, empname, address and age 
*/

#include <stdio.h>
 
struct employee
{
    int     empno,age;
    char    empname[30],address[50];
};
 
int main()
{
    
    struct employee emp;
     
    
    printf("\nEnter Employee details :\n");

    printf("Number ?:");            
    scanf("%d",&emp.empno);

    printf("Name ?:");          
    scanf("%s",&emp.empname);

    printf("Address ?");     
    scanf("%s",&emp.address);

    printf("Age ?");  
    scanf("%d",&emp.age);
    
    printf("\nEntered detail is:\n");
    printf("Number: %d\n"     ,emp.empno);
    printf("Name: %s\n"   ,emp.empname);
    printf("Address: %s\n",emp.address);
    printf("Age: %d\n",emp.age);
    

    return 0;
}