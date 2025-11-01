#include <iostream>
using namespace std;

int main() 
{
    cout << "\nOuter loop columns first:\n";
    
    for (int j = 1; j <= 5; j++)
	{
        for (int i = 1; i <= 3; i++)
            cout << "* ";
        cout << endl;
    }
    
    return 0;
    
}
