// Program to count words in a string

#include<bits/stdc++.h>
using namespace std;
int countwords(string str)
{
    //Beaking input into words
    //using string stream
    int count = 0;
    //used for breaking words
    stringstream s(str);
    string word;
    while(s >> word)
        count++;
    return count;
}
int main()
{
    string s;
    cout<<"Enter the String: ";
    getline(cin, s);
    cout<<countwords(s);

return 0;
}
