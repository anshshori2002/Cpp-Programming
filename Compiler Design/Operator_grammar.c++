//Program to Check weather given Production rule is Operator Grammar or not.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the Production Rules: ";
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='>')
        {
            if(isalpha(s[i+1])&&isalpha(s[i+2]))
            {
                cout<<"This Productions are not Operator Precedance.";
                exit(0);
            }
            else
            {
                for(int j = i; j < s.size(); j++) 
                {
                    if(s[j]=='$' || s[j] != toupper(s[j]))
                    {
                        cout<<"This Productions are not Operator Precedance.";
                        exit(0);
                    }
                    
                }
            }
        }
    }
    cout<<"This Productions are Operator Precedance.";
    return 0;
}


// OUTPUT:-

