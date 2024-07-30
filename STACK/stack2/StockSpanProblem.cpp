#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={100,80,60,81,70,60,75,85};
int n=sizeof(arr)/sizeof(arr[0]);
stack<int>temp;
stack<int>ans;
ans.push(arr[0]);
int a[n];
a[0]=1;
for(int i=0;i<n;i++)cout<<setw(10)<<arr[i]<<" ";
cout<<endl;
int m=1;
for(int i=1;i<n;i++)
{
  m=1;
  while(ans.size()>0&&arr[i]>ans.top())//pop
  {
    m++;
    temp.push(ans.top());
    ans.pop();
  }
  a[i]=m;//ans
  while(temp.size()>0)
  {
    ans.push(temp.top());
    temp.pop();
  }
  ans.push(arr[i]);//push
}
for(int i=0;i<n;i++)cout<<setw(10)<<a[i]<<" ";
return 0;
}