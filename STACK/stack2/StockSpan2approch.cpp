#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={100,80,60,81,70,60,75,85};
int n=sizeof(arr)/sizeof(arr[0]);
int ans[n];
ans[0]=1;
stack<int>a;
a.push(0);
for(int i=0;i<n;i++)cout<<setw(5)<<arr[i]<<" ";
for(int i=1;i<n;i++)
{
    while(a.size()>0&&arr[i]>=arr[a.top()])a.pop();
    if(a.size()==0)ans[i]=1;
    else ans[i]=a.top();
    a.push(i);
}
cout<<endl;
for(int i=0;i<n;i++)cout<<setw(5)<<ans[i]<<" ";
cout<<endl;
for(int i=1;i<n;i++)
{
    ans[i]=i-ans[i];
}
for(int i=0;i<n;i++)cout<<setw(5)<<ans[i]<<" ";
cout<<endl;

return 0;
}