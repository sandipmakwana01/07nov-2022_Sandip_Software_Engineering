#include<stdio.h>
int main()
{
    int a = 10;
    float b = 10;

    a += 10;
    printf("a+10=%d\n",a);

    a -= 10;
    printf("a-10 = %d \n", a);

    a *= 10;
    printf("a*10 = %d \n", a);

    b /= 5;
    printf("a/10 = %f \n", b);

    /*
    Modular Operator %
    Returns remainder for int(only)
    */
    a %= 6;
    printf("a10 = %d \n", a);

    return 0;
}