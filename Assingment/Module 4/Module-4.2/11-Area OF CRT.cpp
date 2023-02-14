#include<iostream>
using namespace std;

class overloading
{
	public:
		int area(double a)
		{
			cout<<endl<<"Area of circle is:"<<3.14*a*a;
			return 0;	
		} 
		
		int area(double b, double c)
		{
			cout<<endl<<"Area of rectangle is:"<<b*c;
			return 0;
		}
		
		int area(int d, int e)
		{
			cout<<endl<<"Area of triangle is:"<<d*e/2;
			return 0;
		}
};

int main()
{
	overloading a1;
	a1.area(6.4);
	a1.area(2.2,2.2);
	a1.area(4,2);
	return 0;
}