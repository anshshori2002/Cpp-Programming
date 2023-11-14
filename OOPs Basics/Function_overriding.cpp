#include<bits/stdc++.h>
using namespace std;

class Parent
{
    public:
        virtual void print()
        {
            cout<<"Parent Class"<<endl;
        }
         void show()
        {
            cout<<"Parent Class"<<endl;
        }
};
class child: public Parent{
    public:
    void print()
    {
        cout<<"Child Class"<<endl;
    }
    void show()
    {
        cout<<"Child class"<<endl;
    }
};
int main()
{
    Parent *p;
    child c;

    p = &c;
    p->print();
    p->show();

return 0;
}
