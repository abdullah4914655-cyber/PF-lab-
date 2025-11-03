#include<iostream>
using namespace std;
int main()
{
	int password=1234;
	int userpin;
	int attempt=0;
	
	while(attempt<3)
	{
		cout<<"enter the password"<<endl;
		cin>>userpin;
		
		if(userpin==password)
		{
			cout<<"access is granted"<<endl;
			break;
		}
		else
		{
			cout<<"wrong password you have attempt"<<attempt<<endl;
			
		}
		
		attempt++;
		
	}
	if(attempt==3)
	{
	cout<<"your attempt are full now you visit after 24hours"<<endl;
	}
	return 0;
} 
