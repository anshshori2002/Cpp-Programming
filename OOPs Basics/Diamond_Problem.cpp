#include<bits/stdc++.h>
using namespace std;

class Parent
{
    public:
    Parent()
    {
        cout<<"Parent Class"<<endl;
    }
};
class Child1: public Parent
{
    public:
    Child1()
    {
        cout<<"Child Class-1"<<endl;
    }
};
class Child2: public Parent
{
    public:
    Child2()
    {
        cout<<"Child Class-2"<<endl;
    }
};
class GrandChild: public Child1, public Child2
{
    public:
    GrandChild()
    {
        cout<<"Grand Child"<<endl;
    }
};
int main()
{  
    GrandChild gc;

return 0;
}
