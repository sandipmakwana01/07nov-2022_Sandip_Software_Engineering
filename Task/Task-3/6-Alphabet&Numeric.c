/*
check alphabet, number or special character
*/

#include <stdio.h>

int main()
{
    char i;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &i);


    /* Alphabet check */
    if((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
    {
        printf("'%c' is alphabet.", i);
    }
    else if(i >= '0' && i <= '9')
    {
        printf("'%c' is number.", i);
    }
    else 
    {
        printf("'%c' is special character.", i);
    }

    return 0;
}
