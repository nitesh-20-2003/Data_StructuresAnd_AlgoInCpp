#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
int main()
{
int minpenlaty=INT_MAX;
string s="yyyy";
int m=s.size();
vector<int>pre(s.size()+1),suff(s.size()+1);
pre[0]=0;
//bcoz if shop is closed at first hour no. of n=0 before 0th  hour;
int non=0;//no of no's
for(int i=1;i<m+1;i++)
{
    if(s[i-1]=='n')non++;
    pre[i]=non;
}
suff[m]=0;

for(int i=m-1;i>=0;i--)
{
  suff[i]=suff[i]+((s[i]=='y')?1:0);
}
for(int i=0;i<m+1;i++)
{
    pre[i]+=suff[i];
    if(pre[i]<minpenlaty)
    minpenlaty=pre[i];

}
for(int i=0;i<m+1;i++)
{
    if(pre[i]==minpenlaty)
    {
        cout<<minpenlaty;
        break;
    }
}

return 0;
}