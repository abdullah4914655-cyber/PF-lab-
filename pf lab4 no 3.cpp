#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char op;
	cout<<"enter the two number ";
	cin>>num1>>num2;
	cout<<"enter the arthimetic (+, -, *, /, %). "<<endl;
	cin >> op ;
	switch( op )
	{
	
	case '+':
		{
		cout<<"the sum of the number is :"<<num1+num2;
		}
			break;
	case '-':
	    {
	    	cout<<"the sub of number is :"<<num1-num2;
		}
			break;
	case '*':
	    {
	    	cout<<"the mul of number is :"<<num1*num2;	
		}	
			break;
	case '/':
		{
			cout<<"the div of number is :"<<num1/num2;
		}
			break;
	case '%':
		{
			cout<<"the reminder of number is :"<<num1%num2;
		
		}
			break;
	default:
		{
			cout<<"the operator is invalid";
		}
	    	break;
	}	
			
	return 0;
		
}
