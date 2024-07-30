#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
string s="())()";
if(s.size()%2!=0)//odd size
cout<<"false";
int n=s.size();
stack<char>m;
for(int i=0;i<n;i++)
{
    if(s[i]=='(')
    {
        m.push('(');
    }
   else if(s[i]==')')
    {
        if(m.top()=='(')
        m.pop();
        else if(m.size()==0)
        {
            // cout<<"false";
            break;
        }
    }

}
if(m.size()==0)
cout<<"true";
else cout<<"false";
return 0;
}