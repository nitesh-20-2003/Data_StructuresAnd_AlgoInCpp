#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int solve(int val1,int val2 ,char ch)
{
    if(ch=='+')return val1+val2;
    if(ch=='*')return val2*val1;
    if(ch=='-')return val1-val2;
    if(ch=='/')return val1/val2;
}
int main()
{
string s="785-4*3/+1+";//infix expression
//for evaluation we need two stacks
stack<int>val;
for(int i=0;i<s.size();i++)
{
    //to check whether digit or op calculate its ascii val
    int ascii=(int)s[i];
    if(ascii>=48 &&ascii<=57)val.push(s[i]-48);
  else{
    char ch=s[i];
    int val2=val.top();
    val.pop();
    int val1=val.top();
    val.pop();
    int ans=solve(val1,val2,ch);
    val.push(ans);
    }
}

cout<<val.top()<<endl;
cout<<7+(8-5)*4/3+1;
return 0;
}