#include<iostream>
using namespace std;

int main()
{
	int value1,value2;
	cout<<"enter the values"<<endl;
	cin>>value1;
	cin>>value2;
	
	int sum,difference,product,quotent,reminder;
	
	sum=value1+value2;
	difference=value1-value2;
	product=value1*value2;
	quotent=value1/value2;
	reminder=value1%value2;
	
	cout<<"sum ="<<sum<<endl;
	cout<<"difference ="<<difference<<endl;
	cout<<"product ="<<product<<endl;
	cout<<"quotent ="<<quotent<<endl;
	cout<<"reminder ="<<reminder<<endl;
	
	return 0;
		
}
