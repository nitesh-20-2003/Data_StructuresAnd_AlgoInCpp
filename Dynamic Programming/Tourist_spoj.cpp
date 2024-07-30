#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m;// dimenstions of the input matrix
char mat[105][105];// input matrix
ll dp[105][105][105];
ll f(ll i,ll j,ll x,ll y){
    if(i<0||j<0||x<0||y<0||i>n||j>m||x>n||y>m
    ||mat[x][y]=='#'||mat[i][j]=='#') return 0;
    if(i==n&&j==m){
        return mat[i][j]=='*';
    }
    if(dp[i][j][x]!=-1)return dp[i][j][x];
    ll result=INT_MIN;
    result=max(result,f(i+1,j,x+1,y));
    result=max(result,f(i+1,j,x,y+1));
    result=max(result,f(i,j+1,x+1,y));
    result=max(result,f(i,j+1,x,y+1));
    result+=(mat[i][j]=='*');
    result+=(mat[x][y]=='*');
    // remove repition
    if(i==x&&y==j&&mat[i][j]=='*')result--;
    return dp[i][j][x]=result;
}
int main()
{
int t;
cin >>t;
while(t--)
{
    cin >>m>>n;
    memset(dp,-1,sizeof dp);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++){
            cin>> mat[i][j];
        }
    }
    cout<<f(1,1,1,1)<<endl;
}
return 0;
}