/*
    WAP to make addition, Subtraction and multiplication of two matrix using
    2-D Array 
*/

#include<stdio.h>

int main()
{
 int i, j, rows, columns, a[10][10], b[10][10];

 int Addition[10][10], Subtraction[10][10], Multiplication[10][10];
 
  
 printf("\nPlease Enter Number of rows and columns\n");
 scanf("%d %d", &i, &j);
 
 printf("\nPlease Enter the First Array Elements\n");
 for(rows = 0; rows < i; rows++)
  {
   for(columns = 0;columns < j;columns++)
    {
      scanf("%d", &a[rows][columns]);
    }
  }
   
 printf("\nPlease Enter the Second Array Elements\n");
 for(rows = 0; rows < i; rows++)
  {
   for(columns = 0;columns < j;columns++)
    {
      scanf("%d", &b[rows][columns]);
    }

  }
  
 for(rows = 0; rows < i; rows++)
  {
   for(columns = 0;columns < j;columns++)
    {
      Addition[rows][columns] = a[rows][columns] + b[rows][columns];  
      Subtraction[rows][columns] = a[rows][columns] - b[rows][columns];  
      Multiplication[rows][columns] = a[rows][columns] * b[rows][columns];  
        
    }
  }

 printf("\nAdd\t Sub\t Multi\t");
 for(rows = 0; rows < i; rows++)
  {
   for(columns = 0; columns < j; columns++)
    {
      printf("\n%d \t ", Addition[rows][columns]);
      printf("%d \t ", Subtraction[rows][columns]);
      printf("%d \t ", Multiplication[rows][columns]);
     
    }
  }
 return 0;
} 