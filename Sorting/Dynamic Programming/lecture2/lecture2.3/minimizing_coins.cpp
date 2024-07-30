#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int ans( vector<int>coins,int x)
{
    if(x==0)return 0;
    int a=INT_MAX;
    for(int i=0;i<coins.size();i++)
    {
        a=min(a,ans(coins,x-coins[i]));
    }
    return 1+a;
}
int main()
{
int n=3;
int x=11;
vector<int>coins={1,5,7};
cout<<ans(coins,x);
return 0;
}