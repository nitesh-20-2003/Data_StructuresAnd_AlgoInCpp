#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="aaabbcddaabffg";
string ans="";
stack<char>st;
int i=0;
int j=1;
while(j<s.size())
{
    st.push(s[i]);
    while(s[j]==st.top())j++;
    i=j;

}
while(st.size()>0)//ans in reverse order
{
    ans=st.top()+ans;
    st.pop();
}
cout<<ans;
return 0;
}