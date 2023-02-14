#include<iostream>
using namespace std;

class student
{
	public:
		int percentage;
		
		int sgetdata()
		{
			cout<<endl<<"Enter Percentage of student:";
			cin>>percentage;
			cout<<"Percentage is:"<<percentage;
			return 0;
		}
};

class teacher
{
	public:
		int salary;
		
		int tgetdata()
		{
			cout<<endl<<"Enter salary of teacher:";
			cin>>salary;
			cout<<"salary is:"<<salary;
			return 0;
		}
};

class user : public student, public teacher
{
	public:
		char name[10];
		int age;
		
		int pgetdata()
		{
			cout<<endl<<"Enter Your Name:";
			cin>>name;
			cout<<"Name is:"<<name;
			cout<<endl<<"Enter Your Age:";
			cin>>age;
			cout<<"Age is:"<<age;
			return 0;
		}
};

int main()
{
	user a1;
	a1.sgetdata();
	a1.tgetdata();
	a1.pgetdata();
	return 0;
}