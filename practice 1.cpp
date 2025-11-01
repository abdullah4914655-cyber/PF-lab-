#include<iostream>
using namespace std;
int main()
{
	bool issunday;
	cout<<"Is today sunday(1 for yes, 0 for no): ";
	cin>>issunday;
	if(!issunday)
	{
		cout<<"the shop is open today."<<endl;
	}
	else
	{
		cout<<"the shop is closed."<<endl;
	}
}
