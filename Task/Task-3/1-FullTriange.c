#include<stdio.h>

int main()
{
  int a,b,n;

  printf("\nEnter the value :");
  scanf("%d",&n);

  for(a=1;a<=n;a++)
  {
    printf("\n");

    for(b=1;b<=(n-a);b++)
    {
        printf("  ");
    }

    for(b=1;b<=a;b++)
    {
        printf(" %d",b);
    }

    for(b=1;b<a;b++)
    {
        printf(" %d",(a-b));
    }
  }

  for(a=1;a<=n;a++)
  {
    printf("\n");

    for(b=1;b<=a;b++)
    {
      printf("  ");
    }

    for(b=1;b<(n-a);b++)
    {
       printf(" %d",b);
    }

    for(b=(n-a);b>0;b--)
    {
       printf(" %d",b);
    }

  }

  return 0;
  
}
