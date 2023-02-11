#include<stdio.h>
int main()
{
    int a = 5*2-2*3;
    //5*2-2*3
    //10-6
    //4

    int b = 5*2/2*3;
    //10/2*3
    //5*3
    //15

    int c = 5*(2/2)*3;
    //5*1*3
    //5*3
    //15

    int d = 5+2/2*3;
    //5+1*3
    //5+3
    //8

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);

    return 0;
}