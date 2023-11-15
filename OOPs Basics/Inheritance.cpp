#include<bits/stdc++.h>
using namespace std;

class Parent
{
    public:
        int x;
    private:
        int y;
    protected:
        int z;
};
//The below code describe the different types of inheritance modes.
class Chile1 : public Parent
{
    //x will remain public
    //y will remain protected
    //x is not accessible
};
class Child2 : private Parent
{
    //x will be private
    //y will be private
    //z will inaccessible
};
class Child3 : protected Parent
{
    //x will be protected
    //y will be protected
    //z will be inaccessible
};
int main()
{
    Parent p;
    p.x = 10;
    cout<<p.x;   

return 0;
}