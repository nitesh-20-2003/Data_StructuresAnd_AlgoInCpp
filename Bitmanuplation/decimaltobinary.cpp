#include<bits/stdc++.h>
using namespace std;
int main()
{
string ans="";
int num=10;
while(num>0)
{
    if(num%2==0)
    {
        ans='0'+ans;
    }
    else 
    ans='1'+ans;
    num=num>>1;

}
cout<<ans;
cout<<endl;
int x=__builtin_popcount(ans);
return 0;
}
