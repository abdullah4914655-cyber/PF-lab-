#include <iostream>
using namespace std;

int main() {
	cout<<"ABDULLAH ANJAD HUSSAIN /n FA25-BSET-052"<<endl;	
    char str[50];
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 50);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
            count++;
        }
    }

    cout << "Number of vowels: " << count;
    return 0;
}

