#include<bits/stdc++.h>
using namespace std;
// Multiple Inheritance
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
class GrandChild: public Child
{
    public:
    GrandChild()
    {
        cout<<"Grand Child Class"<<endl;
    }
}gc;
int main()
{
    // GrandChild gc    ;

return 0;
}