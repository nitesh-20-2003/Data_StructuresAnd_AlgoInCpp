#include<bits/stdc++.h>
using namespace std;
int f()
{
int a,b,c;
cin>>a>>b>>c;
vector<int>m;

}

class Solution {
public:
    int dp[100005];
    int largest(vector<int>& arr, int diff,int idx)
    {
        if(idx>=arr.size())return 0;
        if(dp[idx]!=-1)return dp[idx];
        int ans=0;
        for(int i=idx+1;i<arr.size();i++){
            int curr=arr[i];
            int prev=arr[idx];
            if(curr-prev==diff){
                ans=max(ans,(1+largest(arr,diff,idx+1))) ;
            }
        }
        return dp[idx]=ans;
    }
    int longestSubsequence(vector<int>& arr, int difference) 
    {
        memset(dp,-1,sizeof(dp));
        int result=0;
        for(int i=0;i<arr.size();i++)
        {
            result=max(result,1+largest(arr,difference,i));
        }
        return result;

    }
};
int main()
{
int n;
cin>>n;
vector<int>input;
for(int i=0;i<n;i++)
{
 f();
}
return 0;
}