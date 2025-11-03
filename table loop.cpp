#include<iostream>
using namespace std;
int main()
{
	int  n;
	cout<<"enter the number for table"<<endl;
	cin>>n;
	cout<<"the table of  "<< n <<" is given below"<<endl;
	int i=1;
	
	while(i<=10)
	
	{
		cout<<n<<" X "<<i<<" = "<<n*i<<endl;
		i++;
	}
	
	return 0;
}
