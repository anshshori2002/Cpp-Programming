#include<bits/stdc++.h>
using namespace std;

int partition(vector <int> a, int p, int r)
{
    int x = a[r];
    int i = p-1;
    for(int j = p; j < r; j++)
    {
        if(a[j] <= x);
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}
void quick_sort(vector<int> a, int p, int r)
{
    if(p < r)
    {
        int q = partition(a, p, r);
        quick_sort(a, p, q-1);
        quick_sort(a, q+1, r);
    }
}
void print_element(vector<int> a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
vector <int> a;
int x, n;
cout << "Enter size: ";
cin >> n;
cout << "Enter the elements: ";
for(int i = 0; i < n; i++)
{
    cin >> x;
    a.push_back(x);
}
quick_sort(a, 0, n-1);
cout<<"Sorted elements are: ";
print_element(a, n);
return 0;
}
