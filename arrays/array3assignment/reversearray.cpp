#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
vector<int>v;
cin>>n;
for(int i=0;i<n;i++)
{
    int m;
    cin>>m;
    v.push_back(m);
}
vector<int>v1(n);
for(int i=0,j=n-1;i<n,j>=0;i++,j--)
{
v1[i]=v[j];
}
for(int i=0;i<n;i++){
    cout<<v1[i]<<" ";
}
    return 0;
}