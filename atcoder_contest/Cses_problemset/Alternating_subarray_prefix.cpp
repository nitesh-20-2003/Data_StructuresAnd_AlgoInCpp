#include<bits/stdc++.h>
using namespace std;
vector<int> fbu(int n)
{
    vector<int>input(n);
    for(int i=0;i<n;i++) cin>>input[i];
    vector<int>dp(n,1);
    for(int i=n-2;i>=0;i--)
    {
        if(input[i]<0&&input[i+1]>0||input[i]>0&&input[i+1]<0)
        {
            dp[i]+=dp[i+1];

        }
    }
    cout<<endl;
    return dp;
}
int main()
{
int n;
cin>>n;
vector<vector<int>>output;
for(int i=0;i<n;i++)
{
    vector<int>output1;
    int x;
    cin>>x;
    output1=fbu(x);
    output.push_back(output1);
}
for(int i=0;i<output.size();i++)
{
    for(int j=0;j<output[i].size();j++){
        cout<<output[i][j]<<" ";

    }
    cout<<endl;
}

return 0;
}