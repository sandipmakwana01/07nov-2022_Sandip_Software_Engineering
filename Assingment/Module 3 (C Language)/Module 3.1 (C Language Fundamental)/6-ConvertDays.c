/* Q - 6  WAP to convert years into days and days into years. */
 
 #include<stdio.h>
 int main()
 {
	float year;
	int days;
	char a;
	
	printf("\n d = year to days \n y = days to year \n " );
	
	printf("\n Enter d or y = ");
	scanf("%c",&a);
	
	if(a=='d')
	{
		
	    printf("\n Enter no. of years = ");
	    scanf("%f",&year);
	    days=year*365;
	    printf(" %f Year = %d days",year,days);
	}
	else if(a=='y')
	{
	    printf("\n Enter no. of days = ");
	    scanf("%d",&days);
	    year=days/365;
	    printf(" \n %d days = %f Year ",days,year);
	}
	else
	{
		printf(" \n Please enter a valid input...");
	}
	return 0;
  }