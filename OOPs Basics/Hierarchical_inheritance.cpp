#include<bits/stdc++.h>
using namespace std;
//Hierarchical Inheritance
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
int main()
{
    Child1 c1;
    Child2 c2;
return 0;
}