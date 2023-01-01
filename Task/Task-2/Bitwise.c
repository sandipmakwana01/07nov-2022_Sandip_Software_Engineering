#include<stdio.h>
void main()

{
	int a,b;
	int ans;
	
	printf("Enter a & b =");
	scanf("%d %d",&a,&b);
	
	ans=a&b;
	printf("Bitwise AND = %d \n",ans);
	
	ans=a|b;
	printf("Bitwise OR = %d \n",ans);

	ans=a^b;
	printf("Bitwise EXOR = %d \n",ans);

	ans=~b;
	printf("Bitwise NOT = %d \n",ans);
	
	ans=b<<1;
	printf("Bitwise Shift left = %d \n",ans);
	
	ans=b>>1;
	printf("Bitwise Shift Right = %d \n",ans);		
}
