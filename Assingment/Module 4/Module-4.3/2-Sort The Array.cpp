#include<iostream>
using namespace std;

template <class first> 
first swap(first a,first b)
{
	a=b;
	b=a+1;
	
	cout<<endl<<"Value of a is:"<<a;
	cout<<endl<<"Value of b is:"<<b;
	
	return 0;
}

int main()
{
	int m, v;
	swap(12,11);
	
	return 0;
}