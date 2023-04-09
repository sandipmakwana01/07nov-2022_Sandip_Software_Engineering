
#include<iostream>
using namespace std;
main()
{
    char op;
    float num1, num2;

    cout<<"Enter Oprerators:+,-,*,/:";
    cin >> op;
     cout<<"Enter first number:";
     cin >> num1 >> num2;
     cout<<"Answer is:";

 
    switch (op) {
         
       case '+':
            cout << num1 + num2;
            break;
         
       case '-':
            cout << num1 - num2;
            break;
         
       case '*':
            cout << num1 * num2;
            break;
         
       case '/':
            cout << num1 / num2;
            break;
         
      default:
            cout << "This operator is not correct";
            
    }
    return 0;
}