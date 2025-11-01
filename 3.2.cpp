#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter an ASCII code (integer 1 to 127): ";
	cin>>number;
	char ch=number;
	cout<<"Character of ASCII code is "<<number<<" is:"<<ch;
	return 0;
}
