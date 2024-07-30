#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
string s="111";
int n=s.length();
int ans=0;
for(int i=n-1;i>=0;i--)
{
    char ch=s[i];
 int num=ch-'0';
    ans+=num*(1<<(s.length()-i-1));
}
cout<<ans<<"  "<<(int)'1'<<(int)'0';
cout<<endl;
return 0;
}