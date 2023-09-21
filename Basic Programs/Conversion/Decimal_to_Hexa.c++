#include<bits/stdc++.h>
using namespace std;
void decimal_to_hexa(int n)
{
    if(n<=15)
    cout<<n;
    else
    {
        decimal_to_hexa(n/16);
        cout<<n%16;
    }
}
int main()
{
    int n;
    cout<<"Enter the no.: ";
    cin>>n;
    cout<<"Hex no. :";
    decimal_to_hexa(n);


return 0;
}
