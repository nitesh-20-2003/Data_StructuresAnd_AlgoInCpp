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
int count=0;
for(int i=2;i<=n;i++){
    if(sieve[i]==1)count++;
}
cout<<count;
return 0;
}  
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }