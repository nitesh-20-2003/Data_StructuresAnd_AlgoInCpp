#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
string s;
bool flag=true;
string t;
cout<<"enter the value of two strings"<<endl;
cin>>s>>t;
vector<int>v(150,1000);
for(int i=0;i<s.size();i++ )
{

if(v[i]==1000)
{
    v[i]=s[i]-t[i];
    flag=true;
}
else if(v[i]!=s[i]-t[i])
{
    cout<<" not anagram :";
    break;
}
}
for(int i=0;i<150;i++){
    v[i]=1000;
}
   for(int i=0;i<t.size();i++ )
{

if(v[i]==1000)
{
    v[i]=s[i]-t[i];
    flag=true;
}
else if(v[i]!=s[i]-t[i])
{cout<<" not anagram :";
break;
}
} 
if(flag==true)
cout<<" given strings are anagram :)";
}