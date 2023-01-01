/* WAP to show Vowel or Consonant using switch case */

#include<stdio.h>
int main()
{
	char ch;
	
	printf("\n Enter one character = ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
			printf("You enter a vowel character");
			break;
			
		case 'e':
			printf("You enter a vowel character");
			break;
			
		case 'i':
			printf("You enter a vowel character");
			break;
			
		case 'o':
			printf("You enter a vowel character");
			break;
			
		case 'u':
			printf("You enter a vowel character");
			break;	
			
		default:
			printf("You enter consonant");
			break;
	}
	
	
}
