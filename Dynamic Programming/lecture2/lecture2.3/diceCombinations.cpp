#include <bits/stdc++.h>
using namespace std;

vector<long long> dp;
vector<int> arr = {1, 2, 3, 4, 5, 6};

long long combinations(int n) 
{
    if (n == 0) return 1; 
    if (dp[n] != -1) return dp[n];
    
    long long sum=0;
        for(int i=1;i<=6;i++){
            if(n-i<0) break;
            sum=sum+combinations(n-i);
        }
    return dp[n] = sum;
}
long long fbu(int n){
    dp[0]=1;// o represents we found atleast one valid answer
    for(int k=1;k<=n;k++)
    {
        long long sum=0;
        for(int i=1;i<=6;i++)
        {
            if(k-i < 0) break;
            sum=sum+dp[k-i];
        }
        dp[k]=sum;
    }
    return dp[n];
}

int main() {
    int n ;
    cin>>n;
    dp.resize(n+1,-1);

    // for(int i=0;i<n+1;i++)cout<<dp[i]<<" ";
cout<<combinations(n)<<endl;
cout<<dp[n];
    return 0;
}
