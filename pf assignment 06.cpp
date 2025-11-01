#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
            sum += j;
        }
        cout << endl;
    }
    cout << "Total Sum = " << sum << endl;
    return 0;
}
