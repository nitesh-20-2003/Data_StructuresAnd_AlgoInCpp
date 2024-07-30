
#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;

int ans(int i,vector<int>&h,int k,string leastpath)
{
if(i>=h.size())
{
    return INT_MAX;
}
    leastpath.push_back(i);
    if(i==h.size()-1)
  { 
    return 0;
  }

int a=INT_MAX;
for(int j=1;j<=k;j++)
{
    if(i+j>=h.size())break;
    int z=abs(h[i]-h[i+j])+ans(i+j,h,k,leastpath);
    a=min(a,z);

    
}

return a;
}
// bottom up solution 
/**
 * !make an array ,if  we are on last stone cost is 0
 * * therfore min cost to jump from 2nd last to last stone is :dp[i]=min(dp[i],abs(hi-hj)+dp[i+j]);
 */

void bu(){
  // base case:)
  dp[n-1]=0;
  for(i=n-2;i>=0;i--)
{  
  for (int j=1;j<=k;j++)
  {
if (i+j>=h.size())break;

  }
  }
}
int main()
{

int k=3;
int stone=0;
vector<int>cost={10,30,40,50,20};
string leastpath="";
cout<<ans(0,cost,k,leastpath);



return 0;
}

