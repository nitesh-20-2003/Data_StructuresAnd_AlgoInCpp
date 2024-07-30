#include<iostream>
#include<vector>
using namespace std;
void subst(int arr[],int n,int x,vector<int>v,vector<vector<int>>&ans)
{
    if(x==n)
    {
        if(v.size()>=2)
    ans.push_back(v);
        return;
    }
 
    int idx=arr[x];
    int ydx=arr[x+1];
     if(x==n-1)
    {
    subst(arr,n,x+1,v,ans);
    v.push_back(idx);
subst(arr,n,x+1,v,ans);
    }
    else
 {
    subst(arr,n,x+1,v,ans);
    v.push_back(idx);
 if(idx<=ydx)subst(arr,n,x+1,v,ans);
 }

}
int main()
{
int arr[]={4,4,3,2,1};
vector<int>v;
vector<vector<int>>ans;
int n=sizeof(arr)/sizeof(arr[0]);
subst(arr,n,0,v,ans);
cout<<ans[0][0];
return 0;
}
