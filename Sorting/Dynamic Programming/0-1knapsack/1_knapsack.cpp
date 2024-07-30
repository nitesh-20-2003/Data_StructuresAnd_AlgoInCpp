#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
#define ll long long 
vector<vector<ll>>dp;
int ans(vector<int>w,vector<int>v,int idx,int weight)
{
    if(idx==w.size())
    return 0;
    if(dp[idx][weight]!=-1)
    return dp[idx][weight]; 
    int a=INT_MIN; 
    a=max(a,ans(w,v,idx+1,weight));
    if(w[idx]<=weight){
        a=max(a,(ans(w,v,idx+1,weight-w[idx])+v[idx]));
    }
    return dp[idx][weight]= a;
}
ll fbu(vector<int>w,vector<int>v,int weight)
{
    dp.resize(105,vector<ll>(1000005,0));
    int n=w.size();
    /**
     * according to the recurence to cal the wt we need answ for idx+1 to n
     * while for the wt we need answer for wt and less than the wt
     */
    for (int idx=n-1;idx>=0;idx--)
    {
        for(int j=0;j<=weight;j++)
        {
             ll a=LLONG_MIN;
    a=max(a,dp[idx+1][j]);
    if(w[idx]<=j){
        a=max(a,dp[idx+1][j-w[idx]]+v[idx]);
    }
    dp[idx][j]= a;
        }
    }
    
    return dp[0][weight];
}
int main()
{
    int W,N;
    cin>>N>>W;
vector<int>w,v;
for(int i=0;i<N;i++){
    int x,y;
    cin>>x>>y;
    w.push_back(x);
    v.push_back(y);
}


// cout<<ans(w,v,0,W); 
cout<<fbu(w,v,W);
cout<<endl;
return 0;
}