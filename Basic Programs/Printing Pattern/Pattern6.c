Pattern6:   1
            21
            321
            4321
            54321

Code:-
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int rows=1;rows<=n;rows++)
    {
        for(int col=rows;col>=1;col--)
        {
            cout<<col;
        }       
        printf("\n"); 
    }
}
