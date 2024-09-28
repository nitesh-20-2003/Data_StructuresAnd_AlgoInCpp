#include<bits/stdc++.h>
using namespace std;
#include<iomanip>
#define ll long long int
vector<vector<double>>dp;
double f(int coins,vector<double>input,int idx)
{
    if(coins==0)return 1;
    if(idx==-1)return 0;
    if(dp[idx][coins]>-0.9)return dp[idx][coins];
    return dp[idx][coins]=
    f(coins-1,input,idx-1)*input[idx]+
    f(coins,input,idx-1)*(1-input[idx]);
}
int main()
{
    int n;
    cin>>n;
    dp.resize(3000,vector<double>(3000,-1));
    vector<double>input(n);
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }

    cout<<fixed<<setprecision(10)<<f((n+1)/2,input,n-1);
    return 0;
}