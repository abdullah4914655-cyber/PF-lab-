#include<iostream>
using namespace std;

int main() 
{

int a, b, c, d;
int result1,result2,result3,result4,result5;

 cout << "Enter four integer values (a, b, c, d): "<<endl;
 
    cout << "a: ";
    cin >> a;
    cout << "b: "; 
	cin >> b;
	cout << "c: ";
    cin >> c;
    cout << "d:";
	cin >> d;
	 
    cout << "\n--- Calculation Results ---\n" ;
    
    result1 = a + b * c / d;
    cout <<"1. a + b *c/d =" << result1 << "\n";

    result2 = (a + b) * c / d;
    cout<< "2. (a + b) * c/d=" << result2 << "\n";

    result3 = ((a + b) * c) / d;
    cout << "3. ((a + b) * c) /d = " << result3 << "\n";

    result4 = (a + b) * (c / d);
    cout << "4. (a + b) * (c / d) = " << result4 << "\n";

    result5 = a + (b * c) / d;
    cout <<"5. a + (b * c) / d = " << result5 << "\n";

return 0;
}
