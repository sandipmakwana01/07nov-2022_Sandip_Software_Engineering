#include<iostream>
using namespace std;

class first
{
	public:
		int a, b;
		int input()
		{
			cout<<"Enter the value of a and b:";
			cin>>a>>b;
		
			return 0;
		}
		friend int max(first object);
};

int max(first object)
{
	if (object.a > object.b)
	{
		cout<<"Maximum num is:"<<object.a;
	}
	
	else
	{
		cout<<"Maximum num is:"<<object.b;
	}
	
	return 0;
}

int main()
{
	first ab;
	ab.input();
	max(ab);
	
	return 0;
}