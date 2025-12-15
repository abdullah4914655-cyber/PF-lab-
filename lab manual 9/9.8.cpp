#include <iostream>
using namespace std;

int main() {
	cout<<"ABDULLAH ANJAD HUSSAIN /n FA25-BSET-052"<<endl;	
    char str[50];

    cout << "Enter a string: ";
    cin.getline(str, 50);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    cout << "Uppercase string: " << str;
    return 0;
}

