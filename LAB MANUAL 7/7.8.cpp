#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    cout << "Sum (int): " << add(3, 4) << endl;
    cout << "Sum (float): " << add(2.5f, 3.5f);
    return 0;
}

