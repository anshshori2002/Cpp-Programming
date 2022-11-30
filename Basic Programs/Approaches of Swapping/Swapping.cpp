//Code for Approach 1: This Approach is done by using the Temporary Variable.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two Number :"<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    //Approach-1
    int temp;
    temp = a;
    a = b;
    b = temp;
    
    cout<<"The Numbers after swaping :"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
}




