#include <iostream>
using namespace std;

int main() {
	cout<<"ABDULLAH ANJAD HUSSAIN /n FA25-BSET-052"<<endl;
    char str1[50], str2[50];
    int i = 0;
    bool equal = true;

    cout << "Enter first string: ";
    cin.getline(str1, 50);

    cout << "Enter second string: ";
    cin.getline(str2, 50);

    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            equal = false;
            break;
        }
        i++;
    }

    if(equal)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}

