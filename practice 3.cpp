#include<iostream>
using namespace std;
int main()
{
	int value1,value2;
	char op;
	cout<<"enter value  1"<<endl;
	cin>>value1;
	cout<<"enter the operator(+,-,*,/)"<<endl;
	cin>>op;
	cout<<"enter value 2"<<endl;
	cin>>value2;
	switch(op)
	{
		case '+':
			cout<<"the sum of number is :"<<value1+value2;
			break;
		case '-':
		    cout<<"the difference of number is :"<<value1-value2;
			break;
		case '*':
			cout<<"the product  of number is :"<<value1*value2;
			break;
		case '/':
		   	cout<<"the division of number is :"<<value1/value2;
			   break;
	    default :
			cout<<"you enter wrong operator";
				   	
	}
	
	return 0;
}
