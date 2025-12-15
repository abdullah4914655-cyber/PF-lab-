#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum = " << a + b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    add(x, y);
    return 0;
}

