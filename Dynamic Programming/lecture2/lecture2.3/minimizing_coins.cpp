#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int>dp(1000002,-2);
int ans( vector<int>coins,int x)
{
    if(x==0)return 0;
    if(x==1)return 1;
      int a=INT_MAX;
      if(dp[x]!=-2)return dp[x];
    for(int i=0;i<coins.size();i++)
    {
        if(x-coins[i]<0)continue;
        a=min(a,ans(coins,x-coins[i]));
    }
    if(a==INT_MAX)return dp[x]=INT_MAX;
    return dp[x]=1+a;
}
int main()
{
int n,x;
cin>>n>>x;
vector<int>coins(n);
for(int i=0;i<n;i++)cin>>coins[i];
if(ans(coins,x)==INT_MAX)cout<<-1<<endl;
else cout<<ans(coins,x)<<endl;
return 0;
}