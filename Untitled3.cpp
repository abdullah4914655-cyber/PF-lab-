#include <iostream>
using namespace std;

int main()
 {
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;


    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	 {
        if (ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'|| ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u') 
           
			{
            cout << ch << " is a vowel." << endl;
             }
        else  
		{
            cout << ch << " is a consonant." << endl;
        }
    }
    
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl;
    }
    
    else {
        cout << ch << " is a special character." << endl;
    }

    return 0;
}
