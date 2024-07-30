#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string solve(string val1,string val2 ,char ch)
{
  return val1+ch+val2;
}
int main()
{
string s="785-4*3/+1+";//postfix to infix expression
//for evaluation we need one stacks
stack<string>val;
for(int i=0;i<s.size();i++)
{
    //to check whether digit or op calculate its ascii val
    int ascii=(int)s[i];
    if(ascii>=48 &&ascii<=57)val.push(to_string(s[i]-48));
  else{
    char ch=s[i];
    string val2=val.top();
    val.pop();
    string val1=val.top();
    val.pop();
    string ans=solve(val1,val2,ch);
    val.push(ans);
    }
}

cout<<val.top()<<endl;
cout<<"7+(8-5)*4/3+1";
return 0;
}