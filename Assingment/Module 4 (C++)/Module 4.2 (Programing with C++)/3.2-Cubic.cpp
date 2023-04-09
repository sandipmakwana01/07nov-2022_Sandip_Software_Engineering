#include<iostream>
using namespace std;

inline int cube(int a)
{
	return (a*a*a);
}

int main()
{
	cout<<"Cube is:"<<endl<<cube(2);
}