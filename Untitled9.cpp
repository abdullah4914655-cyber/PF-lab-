#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"enter the chracter"<<endl;
	cin>>ch;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
	||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		cout<<"you enter vowel";
    }
	else if(ch>=1||ch<=9)
	{
		cout<<"you enter number";
	}
	else if(ch>='A'||ch>='Z')
	{
		cout<<"Consonents";
	}
	else
	{
		cout<<"special character";
	}
	return 0;
}

