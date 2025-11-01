#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter the age "<<endl;
	cin>>age;
	if (age>0&&age<13)
       cout<<"you are child ";
	else if (age>13&&age<19)
	    cout<<"you are in teenage";
	else if( age>19&&age<32)
	    cout<<"you are adult";
	else
		cout<<"you are senior";
	
	return 0;		    	
}
