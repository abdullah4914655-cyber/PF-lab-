#include <iostream>
using namespace std;

int main() {
    // Declare three variables
    int num1, num2, num3;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Check which number is the largest using if-else
    if (num1 >= num2 && num1 >= num3)
	{
        cout << "The largest number is: " << num1 << endl;
    }
    else if (num2 >= num1 && num2 >= num3)
	{
        cout << "The largest number is: " << num2 << endl;
    }
    else
	{
        cout << "The largest number is: " << num3 << endl;
    }

    return 0;
}

