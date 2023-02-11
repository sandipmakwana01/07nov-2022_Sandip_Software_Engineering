/*

    Operator Precedence:-

    Priority  Operator
        1       !
        2      *,/,%
        3       +,-
        4     <,<=,>,>=
        5      ==,!=
        6       &&
        7       ||
        8       =
    
    Ex:- a = 4+9*10

*/

/*

    Associativity (for same precedence)
    Left to Right
    Ex:- b=4*3/6*2

*/

#include<stdio.h>
int main()
{
    int a = 4+9*10;
    int b = 4*3/6*2;

    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}