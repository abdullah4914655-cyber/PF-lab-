#include<iostream>

using namespace std;

int main()
{
int temp;
bool is_bearable;

     cout <<"Enter the temp in Celsius: "; 
	 cin >> temp;

     is_bearable = (temp>= 0) && (temp <= 60);
     
     cout << "Bearable status:" <<is_bearable<< " (1 = Bearable, 0 = Unbearable) \n" <<endl;
     
     return 0;

}
