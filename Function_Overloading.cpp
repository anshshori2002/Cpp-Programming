#include<bits/stdc++.h>
using namespace std;
class Sum
{
    public:
    void add(int x, int y)
    {
        int sum = x+y;
        cout<<sum<<endl;
    }
    void add(int x, int y, int z)
    {
        int sum = x+y+z;
        cout<<sum<<endl;
    }
    void add(float x, float y)
    {
        float sum = x+y;
        cout<<sum<<endl;
    }
};
int main()
{
    Sum s;
    //It is decided on Compile time that which function is choose from the above class to do the compilation.
    s.add(2, 3);
    s.add(4, 6, 9);
    s.add(float(3.8), float(4.7));

return 0;
}