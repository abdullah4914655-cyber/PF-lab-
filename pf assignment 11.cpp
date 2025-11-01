#include <iostream>
using namespace std;

int main() 
{
    int n = 4;

    for (int i = 1; i <= n; i++)
	{
        for (int space = n - i; space > 0; space--)
            cout << "  ";

        int num = i;
        for (int j = 1; j <= i; j++)
            cout << num++ << " ";

        num -= 2;
        for (int j = 1; j < i; j++)
            cout << num-- << " ";

        cout << endl;
    }

    return 0;

}
