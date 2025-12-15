#include <iostream>
using namespace std;

int getNumber() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
}

int main() {
    int num = getNumber();
    cout << "You entered: " << num;
    return 0;
}

