#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int f(int i,int j,vector<int>&arr)
{
    if(i==j||i+1==j) return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int ans=INT_MAX;
    for(int k=i+1;k<j;k++)
    {
        ans=min(ans,f(i,k,arr)+f(k,j,arr)+arr[i]*arr[j]*arr[k]);

    }
    return dp[i][j]=ans;
}
int main()
{
int n;
dp.clear();
dp.resize(10005,vector<int>(10005,0));
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
    int x;

    cin>>x; 
    v.push_back(x);
}
// cout<<f(0,n-1,v)<<endl;
// fbu
/**
 * to cal answer from 0 to n-1 we need ans for all smaller sub arrays
 * for len 1 and 2 ans=0;
 */
int ans=0;
for(int len=3;len<=n;len++)
{
    for(int i=0;i+len-1<n;i++)
    {
        int j=i+len-1;
    dp[i][j]=INT_MAX;
    for(int k=i+1;k<j;k++)
    {
      
      dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]+v[i]*v[j]*v[k]);

    }
    ans=dp[i][j];
    }
}
cout<<ans;
cout<<endl;
return 0;
}