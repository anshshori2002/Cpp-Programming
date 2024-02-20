#include <bits/stdc++.h>
using namespace std;
int middle_element_of_merged_array(vector<int> &num1, vector<int> &num2)
{
    int n = num1.size();
    int m = num2.size();
    vector<int> merged;
    for(int i=0; i<n; i++)
    {
        merged.push_back(num1[i]);
    }
    for(int i=0; i<m; i++)
    {
        merged.push_back(num2[i]);
    }
    int total_size = merged.size();
    if(total_size%2==1)
    {
        return double(merged[total_size/2]);
    }
    else 
    {
        return double(merged[total_size/2 -1]+merged[total_size/2]/2);
    }
}
int main()
{
    //Taking input of size of Vectors
    int n,m;
    cout<<"Enter size for two vectors: ";
    cin>>n>>m;
    vector<int> num1(n);
    vector<int> num2(m);
    //Input of two vectors
    cout<<"Enter element of first vector: ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        num1.push_back(x);
    }
    cout<<"Enter element if second vector: ";
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        num2.push_back(x);
    }
    cout<<middle_element_of_merged_array(num1, num2);
    return 0;
}
