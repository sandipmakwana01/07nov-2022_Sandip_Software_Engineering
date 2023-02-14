#include<iostream>
using namespace std;

class first
{
	public:
		int a, b;
		int input()
		{
			cout<<endl<<"Enter value of a and b:";
			cin>>a>>b;
			
		
			return 0;
		}
		
		friend int swap(first object);
};

int swap(first object)
{
	object.a = object.b;
	object.b = object.a-1;
	cout<<"After swaping values of a and b is:"<<object.a<<endl<<object.b;
	return 0;				
}

int main()
{
	first ab;
	ab.input();
	swap(ab);
	
	return 0;
}