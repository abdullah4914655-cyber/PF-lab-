#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"enter the number ";
	cin>>num;
	
	cout<<"The table of the number you enter"<<endl;
	for(int i=1;i<=10;i++)
	{
		cout<<num<<"x"<<i<<"="<<num*i<<endl;
	}
	return 0;
}
