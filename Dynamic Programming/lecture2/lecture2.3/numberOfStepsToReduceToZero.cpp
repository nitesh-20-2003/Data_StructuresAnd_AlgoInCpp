#include<iostream>
using namespace std;
#include<vector>
#include<climits>
vector<int> get_digits(int n){
    vector<int>result;
    while(n>0)
    {
        if(n%10!=0)
        result.push_back(n%10);
        n=n/10;
    }
    return result;
}
int ans(int n)
{
    if(n==0)return 0;
    if(n<=9) return 1;
    vector<int> d=get_digits(n);
    
    int a=INT_MAX;
for(int i=0;i<d.size();i++)
{
  a= min(a,ans(n-d[i]));
}
return a+1;
}
int main()
{
int n=27;
cout<<ans(n)<<endl;
return 0;
}