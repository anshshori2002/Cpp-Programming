#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    public:
    int l;
    int b;  
    //Constructor: It is used to initialise an object, 
    //this is a function which is called when an object is created
    //This function has the same name as the class name
    // Type- 1. Default Constructor 2. Parameterised Constructor 3. Copy Constructor
    Rectangle()         //Default Constructor: No args passed
    {
        l = 0;
        b = 0;
    }
    Rectangle(int x, int y)     //Parameterised Constructor: Arguments passed
    {
        l = x;
        b = y;
    }
    Rectangle(Rectangle &r)     //Copy Constructor: when we want to initilising the Object by another existing Object.
    {                           //In this function we have to pass the Object of the same class.
        l = r.l;
        b = r.b;
    }
    //Destructor - Function is called when object is deleted(manually or at the end of the program)
    //Cannot pass any parameter
    //name ->  ~(Class-name)
    ~Rectangle()    //Destructor
    {
        cout<<"Destructor is called"<<endl;
    }
};

int main()
{
    //Rectangle r1
    Rectangle * r1 = new Rectangle();
    cout<<r1->l<<" - "<<r1->b<<endl;
    delete r1;  

    Rectangle r2(4, 5);
    cout<<r2.l<<" - "<<r2.b<<endl;

    Rectangle r3(r2); // Rectangle r3 = r2;
    cout<<r3.l<<" - "<<r3.b<<endl;

return 0;
}