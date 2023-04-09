#include<iostream>
using namespace std;

class students
{
	public:
		int a;
		
		int sgetdata()
		{
			cout<<"Enter Roll Number of student:";
			cin>>a;
			cout<<" Roll Number is:"<<a;
			return 0;
		}
};

class test : public students
{
	public:
		int b;
		
		int tgetdata()
		{
			cout<<endl<<"Enter Marks in two subjects:";
			cin>>b;
			cout<<" b of two subjects is:"<<b;
			return 0;
		}
};

class result : public test
{
	public:
		int c;
		
		int rgetdata()
		{
			cout<<endl<<"Enter Total Marks in test:";
			cin>>c;
			cout<<" Total Marks of test:"<<c;
			return 0;
		}
};

int main()
{
	result a1;
	a1.sgetdata();
	a1.tgetdata();
	a1.rgetdata();
	return 0;
}