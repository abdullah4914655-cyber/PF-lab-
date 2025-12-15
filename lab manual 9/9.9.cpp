#include <iostream>
using namespace std;

int main() {
	cout<<"ABDULLAH ANJAD HUSSAIN /n FA25-BSET-052"<<endl;
    char str[100];
    int words = 1;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            words++;
    }

    cout << "Total words: " << words;
    return 0;
}

