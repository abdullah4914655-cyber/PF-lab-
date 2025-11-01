#include<iostream>
using namespace std;
int main()
{
int age;

double purchase_amount;
bool is_eligible; int AGE_THRESHOLD = 60;
 double PURCHASE_THRESHOLD = 25000.0;


   cout << "Enter customer's age: "<<endl;
   cin >> age;
   
   cout << "Enter total purchase amount (PKR): "<<endl ; 
   cin >> purchase_amount ;
   	
 is_eligible = (age > AGE_THRESHOLD) || (purchase_amount > PURCHASE_THRESHOLD) ;

 cout << "Discount eligibility: " << is_eligible<<" (1 = Eligible, 0 = Not Eligible) "<<endl;
 
 return 0;
}
