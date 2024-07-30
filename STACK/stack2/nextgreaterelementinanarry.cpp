#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={4,1,2,5,4,3,4,4,8,2,7};

int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)cout<<arr[i]<<" ";
int ans[n];//next greater element array
stack<int>a;
ans[n-1]=-1;//as last element se badha koi nahi hoga therfore last is -1
a.push(arr[n-1]);
for(int i=n-2;i>=0;i--)
{
    while(a.size()>0&&a.top()<=arr[i])a.pop();
    if (a.size()==0)ans[i]=-1;
     else ans[i]=a.top();
    a.push(arr[i]);
}
cout<<endl;
for(int i=0;i<n;i++)cout<<ans[i]<<" ";
return 0;
}