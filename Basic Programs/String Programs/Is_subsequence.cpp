#include<bits/stdc++.h>
using namespace std;
//Function of Boolean to finf the string t is present in string s, 
//if the string t is present in string s then it return true and if not then it will return false
bool Is_subsequence(string s, string t)
{
  int n = s.length();
  int m = t.length();
  int j = 0;
  for(int i=0; i<n and j<m; i++)
    if(t[j] == s[i])
      j++;
  return (j==m);
}
int main()
{
  string s, t;
  cout<<"Enter the String: ";
  cin>>s;
  cout<<"Enter the Sub string: ";
  cin>>t;
  int r = Is_subsequence(s, t);
  if(r) cout<<"True";
  else cout<<"False";
  return 0;
}


// Output:
// Enter the String: ahgfbtyucert
// Enter the Sub string: abc
// True

// Enter the String: adffffbgggggggcjkjk
// Enter the Sub string: abc
// True
