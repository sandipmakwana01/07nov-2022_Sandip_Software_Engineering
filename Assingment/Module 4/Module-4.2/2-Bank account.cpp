#include<iostream>
using namespace std;

class data
{
	public:
		
		string name, type;
		
		int num, amount;
		
	
		int getdata()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<endl<<"Name is:"<<name;

			cout<<endl<<"Enter account number:";
			cin>>num;
			cout<<endl<<"account number is:"<<num;

			cout<<endl<<"Enter account type:";
			cin>>type;
			cout<<endl<<"account type is:"<<type;
			
			cout<<endl<<"Enter account balance:";
			cin>>amount;
			cout<<endl<<"account balance is:"<<amount;
			
			return 0;
		}
		
};

class deposite : public data
{
	public:
		
		int amount;
		
		int amountt()
		{
			cout<<endl<<"How many amount you want to deposite";
			cin>>amount;
			amount+=amount;
			cout<<endl<<"total amount is:"<<amount;
			
			return 0;
		}
};

class withdraw : public deposite
{
	public:
		
		int balance;
		
		int balancee()
		{
			cout<<endl<<"How many amount you want to withdraw?";
			cin>>balance;
			if (amount<balance)
			{
				cout<<endl<<"You didn't have sufficient amount to withdraw.";	
			}	
			
			else
			{
				cout<<endl<<"Your withdrawal is successfully done.";
			}
			
			return 0;
		}
};

class display : public withdraw
{
	public:
		
		string name;
		int bal;
		
		int data()
		{
			cout<<endl<<"Your name is:"<<name;
			
			amount -= balance;
			cout<<endl<<"Your balance is:"<<amount;
			
			return 0;
		}
};

int main()
{
	display d1;
	d1.getdata();
	d1.amountt();
	d1.balancee();
	d1.data();
	
	return 0;
}