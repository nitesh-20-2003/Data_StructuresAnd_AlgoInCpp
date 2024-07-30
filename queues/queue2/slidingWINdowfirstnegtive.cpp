#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={0,-1,-2,3,4,-5,6,7,8,-9};
int k=3;
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>ans;
queue<int>q;
for(int i=0;i<n;i++)
if(arr[i]<0)q.push(i);
for(int i=0;i<n-k+1;i++)
{
       while(q.size()>0&&q.front()<i)
    {
        q.pop();
    }
   if(q.size()==0||q.front()>=i+k)ans.push_back(0);
   else ans.push_back(arr[q.front()]);
    
}
for(int ele:ans)
{
    cout<<ele<<" ";
}
return 0;
}