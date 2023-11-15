#include<bits/stdc++.h>
using namespace std;

class parent1
{
    public:
    parent1()
    {
        cout<<"Parent Class-1"<<endl;
    }
};
class parent2
{
    public:
    parent2()
    {
        cout<<"Parent Class-2"<<endl;
    }
};
class child: public parent1, public parent2
{
    public:
    child()
    {
        cout<<"Child Class"<<endl;
    }
}c;
int main()
{
    

return 0;
}