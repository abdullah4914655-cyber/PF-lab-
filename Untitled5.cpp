#include<iostream>  
using namespace std;
int main(){

int marks; 
 cout<<"enter the marks"<<endl;
  cin>>marks;
if(marks<100)
{
   if(marks>=90)
   {
   cout<<" Grade: A"<<endl;
   }
   else if(marks>=75)
   {
   	cout<< "Grade : B"<<endl;
   }
   else if(marks>=50)
   {
    cout<< "Grade : C"<<endl;
   }
   else
   {
   cout<<"you are fail ";
   }
}
else
{
cout<<"invalid marks"<<endl;
}

return 0;
}
