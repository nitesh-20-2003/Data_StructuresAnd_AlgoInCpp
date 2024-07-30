#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
vector< long long int>v(26,1);
int mod=1000000007;
for(int i=2;i<v.size();i++)
{
    v[i]=((i%mod)*(v[i-1]%mod))%mod;
}
for(int i=0;i<v.size();i++)
{
    cout<<i<<"!"<<"->"<<" "<<v[i]<<endl;
}
return 0;
}