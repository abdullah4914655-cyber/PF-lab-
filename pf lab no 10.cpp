#include <iostream>
using namespace std;

int main() {
    int a, b;
    int expr1, expr2;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    
    expr1 = a * a + 2 * a * b + b * b;  
    expr2 = a * a - 2 * a * b + b * b;  

    cout << "\nResults:" << endl;
    cout << "(a + b)^2 = " << expr1 << endl;
    cout << "(a - b)^2 = " << expr2 << endl;

    return 0;
}

