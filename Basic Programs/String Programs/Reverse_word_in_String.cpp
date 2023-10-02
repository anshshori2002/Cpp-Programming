//Given a string s, reverse the order of characters in each word within a
//sentence while still preserving whitespace and initial word order.
#include<bits/stdc++.h>
using namespace std;
string reverse_words(string str)
{
    stringstream ss(str);
    string result, temp;
    while(ss>>temp)
    {
        reverse(temp.begin(), temp.end());
        result += temp + " ";
    }
    if(!result.empty) 
      result.push_back();
    return result;
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);
    string str = reverse_words(s);
    cout<<str;

return 0;
}
