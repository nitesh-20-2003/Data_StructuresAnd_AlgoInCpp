//in stack always use funda pop ,ans ,push
#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={3,1,2,5,4,6,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
int ans[n];
ans[0]=-1;
stack<int>a;
a.push(arr[0]);
for(int i=0;i<n;i++)cout<<setw(5)<<arr[i]<<" ";
for(int i=1;i<n;i++)
{
    while(a.size()>0&&arr[i]>=a.top())a.pop();
    if(a.size()==0)ans[i]=-1;
    else ans[i]=a.top();
    a.push(arr[i]);
}
cout<<endl;
for(int i=0;i<n;i++)cout<<setw(5)<<ans[i]<<" ";
return 0;
}