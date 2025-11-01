#include<iostream>

using namespace std;

int main()
{
	char a,b,c;
	int A,B,C;
	cout<<"enter the value and i will tell your assci value and its sum"<<endl;
	cin>>a>>b>>c;
	A=a;
	B=b;
	C=c;
	cout<<"the ASSCI value of chracter "<<a<<"is :"<<A<<endl;
	cout<<"the ASSCI value of chracter "<<b<<"is :"<<B<<endl;
	cout<<"the ASSCI value of chracter "<<c<<"is :"<<C<<endl;
    
    int sum=A+B+C;
    
    cout<<"the sum of all ASSCI values are :"<<sum<<endl;
    
   return 0;
}
