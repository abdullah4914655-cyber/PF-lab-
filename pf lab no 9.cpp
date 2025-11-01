#include <iostream>

using namespace std;

int main()
 {
    int number, hundreds, tens, ones;

    
    cout << "Enter a three-digit number: ";
    cin >> number;

    ones = number % 10;

    tens = (number / 10) % 10;
    
    hundreds = (number / 100) % 10;

    
    cout << "There are " << hundreds << " hundreds, " << tens << " Tens, and "
    << ones << " Ones in " << number << "." << endl;

    return 0;
}
