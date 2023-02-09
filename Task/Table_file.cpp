#include<iostream>
#include <fstream>
using namespace std;
int main()
{
  int i,no,Ans;
  string str;
  ofstream out;
  out.open("D:/test/temp1.txt");

  cout<<"Enter no. = ";
	cin>>no;
	
	cout<<"Table of given no\n"<<no<<endl; 
	for(i=1; i<=10; ++i)
	{
		Ans=no*i;
		out<<no<<"*"<<i<<"="<<Ans<<endl;
	}
  out.close();
  ifstream in("D:/test/temp1.txt");
  for(i=1; i<=10; ++i)
	{
    in>>str;
    cout<<str<<endl;
	}

  return 0;
}