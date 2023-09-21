#include<bits/stdc++.h>
using namespace std;
void decimal_to_octal(int n)
{
    if(n<=7) cout<< n;
    else 
    {
        decimal_to_octal(n/8);
        cout<< n%8;
    }
}
int main()
{
int n;
cout<<"Enter the no.: ";
cin>>n;
cout<<"Octal no. is: ";
decimal_to_octal(n);

return 0;
}
