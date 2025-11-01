#include<iostream>
using namespace std;
int main ()
{
	float result;
int a;
cout<<"enter the value of a :";
cin>>a;

int b;
cout<<"enter the value of b :";
cin>>b;

char c;
cout<<"enter the fallowing operater (+, -, *, /, %). ";
cin>>c;

if(c=='+')
{
	result=a+b;
cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<result;
}
else if(c=='-')
{
	result=a-b;
cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<result;
 }
else if(c=='*')
{
	result=a*b;
cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<result;
}
else if(c=='%')
{
	result=a%b;
cout<<a<<"\n"<<c<<"\n"<<"\n"<<a<<c<<b<<"="<<result;
}
else if(c=='/')
{
	result=a/b;
cout<< a <<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<result;
}
else
{
cout<<"the operator is invalid";
}

return 0;

}


