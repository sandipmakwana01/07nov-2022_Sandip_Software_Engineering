#include<stdio.h>

void main()

{

        char a,b ;

        printf(" h=hotdrink \n c=colddrink \n d=dinner");

        printf("Enter your choice = ");
        scanf("%c%c",&a,&b);

        if((a == 'h' || a == 'c') && b == 'd')
        {
          printf("Your choice=%c \n",a);
        }
        else
        {
          printf("Enter valid choice \n");
        }

}
