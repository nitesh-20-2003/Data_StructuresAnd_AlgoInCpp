#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int ans(int n,vector<int>&dp)
{
    if(n==1)return 0;
    if(n==2||n==3)return 1;
   return 1+min({ans(n-1,dp),(n%2==0)? ans(n/2,dp):INT_MAX,(n%3==0)?ans(n/3,dp):INT_MAX});
    
}
int main()
{
int n=7;
vector<int>dp(n,-1);
cout<<ans(7,dp);
return 0;
}