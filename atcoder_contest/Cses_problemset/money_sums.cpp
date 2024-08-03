#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
vector<int>input(t);
unordered_set<int>visited;
for(int i=0;i<t;i++)cin>>input[i];
vector<vector<int>>dp(t+1,vector<int>(t+1,0));

for(int i=0;i<t;i++ )dp[i][i]=input[i];

    for(int len=2;len<=t;len++){
        for(int i=0;i<=len-1;i++){
            int j=i+len-1;

        }
    }
return 0;
}