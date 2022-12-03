# include <stdio.h>
# define pi 3.14

void main()

{
	int r;
	float area;
	
	printf("Enter the radius value:");
	scanf("%d",&r);
	
	area=pi*r*r;
	
	printf("Area of circle = %f",area);
	
}
