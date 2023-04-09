#include<iostream>
using namespace std;

class overloading
{
	public:
		
		int calcu(int a, int b)
		{
			cout<<endl<<"addition of a and b is:"<<a+b;
			return 0;
		}
		
		int calcu(double c, double d)
		{
			cout<<endl<<"substraction of c and d is:"<<c-d;
			return 0;
		}
		
		int calcu(int a, double c)
		{
			cout<<endl<<"Multiplication of a and c is:"<<a*c;
			return 0;
		}
		
			
		int calcu(double c, int d)
		{
			cout<<endl<<"Division of c and d is:"<<c/d;
			return 0;
		}
};

int main()
{
	overloading a1;
	a1.calcu(3,8);
	a1.calcu(5.3,6.1);
	a1.calcu(4,1.3);
	a1.calcu(7.3,3);
	return 0;
}