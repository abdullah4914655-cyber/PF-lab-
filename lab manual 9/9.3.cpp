#include <iostream>
using namespace std;

int main() {
	cout<<"ABDULLAH ANJAD HUSSAIN /n FA25-BSET-052"<<endl;
    char str1[50], str2[50];
    int i = 0;

    cout << "Enter first string: ";
    cin.getline(str1, 50);

    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    cout << "Copied string: " << str2;
    return 0;
}

