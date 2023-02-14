#include<iostream>
using namespace std;

class getdata
{
	public:
		int a, b, c;
		getdata()
		{
			cout<<"\nEnter value of a and b:"<<endl;
			cin>>a>>b;
		}
};

class addition : public getdata
{
	public:
		addition()
		{
			c = a + b;
			cout<<"Addition is:"<<endl<<c;
		}
};

class substraction : public getdata
{
	public:
		substraction()
		{
			c = a - b;
			cout<<"substraction is:"<<endl<<c;
		}
};

class multiplication : public getdata
{
	public:
		multiplication()
		{
			c = a * b;
			cout<<"multiplication is:"<<endl<<c;
		}
};

class division : public getdata
{
	public:
		division()
		{
			c = a / b;
			cout<<"division is:"<<endl<<c;
		} 
};

int main()
{
	addition add;
	substraction sub;
	multiplication mul;
	division div;
}