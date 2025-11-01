#include<iostream>
using namespace std;
int main()
{
	int orignal_price,final_price;
	cout<<"enter the final amount of product in dollars "<<endl;
	cin>>orignal_price;
	
	if(orignal_price>=100)
	{
		final_price=orignal_price * 0.10 ;
		cout<<"final price of product is : "<<final_price;
	}
	else
	{
		final_price=orignal_price*0.5;
		cout<<"final price after 5 percent discount :"<<final_price;
	}
	
	return 0;
	
}
