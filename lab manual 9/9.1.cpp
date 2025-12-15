#include <iostream>
using namespace std;

int main()
{
	cout<<"ABDULLAH ANJAD HUSSAIN /n FA25-BSET-052"<<endl;
    char str[50];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 50);

    while(str[length] != '\0') {
        length++;
    }

    cout << "Length of string: " << length;
    return 0;
}

