#include <iostream>
using namespace std;

int main() {
	cout<<"ABDULLAH ANJAD HUSSAIN /n FA25-BSET-052"<<endl;
    char str[50];
    int length = 0;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 50);

    while(str[length] != '\0') {
        length++;
    }

    for(int i = 0; i < length/2; i++) {
        if(str[i] != str[length - i - 1]) {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "String is Palindrome";
    else
        cout << "String is not Palindrome";

    return 0;
}

