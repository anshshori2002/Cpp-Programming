#include<bits/stdc++.h>
using namespace std;
//Single Inheritance
class Parent
{
    public:
    Parent()
    {
        cout<<"Parent Class"<<endl;
    }
};
class Child: public Parent
{
    public:
    Child()
    {
        cout<<"Child Class"<<endl;
    } 
};
int main()
{
    //Goes from Parent to Child
    Child c;
    //Only go to Parent
    Parent p;
return 0;
}
