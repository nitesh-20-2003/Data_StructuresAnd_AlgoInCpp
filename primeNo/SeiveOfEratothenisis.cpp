#include<bits/stdc++.h>
using namespace std;
void fillSieve(vector<bool>&sieve){
    int n=sieve.size()-1;
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i*2;j<=n;j+=i){
            cout<<j<<" ";
            sieve[j]=0;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;

vector<bool>sieve(n+1,1);
sieve[0]=0;
sieve[1]=1;
fillSieve(sieve);
return 0;
}  