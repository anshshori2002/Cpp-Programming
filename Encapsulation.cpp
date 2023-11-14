//Encapsulation: It is property of Oops which ensures binding of methods and variables into a singe unit(Class).
//How this ensure? -> Data is only accessible from the class method.
//This Encapsulation leads to data abstraction/ data hiding 
//(due to this class is called as Abstract Data type(ADT) because handling of the instance variable is done through member method of a class).

#include<bits/stdc++.h>
using namespace std;
class xyz
{
    int x;
    public:
    void set(int n)
    {
        x = n;
    }    
    int get()
    {
        return x;
    }
}obj1;
int main()
{
    // xyz obj1;
    obj1.set(9);
    cout<<obj1.get()<<endl;

return 0;
}