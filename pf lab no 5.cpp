#include<iostream>

using namespace std;

int main()
{
	int x,y;
	bool J, K, L;
	
	cout<<"enter two numbers"<<endl;
	cin>>x>>y;
	
	J=(x==y);
	K=(x>y);
	L=(x<y);
	
	cout<<"1 for true statemnet 0 for false"<<endl;
	
	cout<<"x and y are equal :"<<J<<endl;
	cout<<"x is greater then y :"<<K<<endl;
	cout<<"x is less then y :"<<L<<endl;
	
	return 0;


}
