#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int pri(char op)
{
    if(op=='+'||-op=='-')return 1;
    else if(op=='*'||op=='/')return 2;
}
int solve(int val1,int val2 ,char ch)
{
    if(ch=='+')return val1+val2;
    if(ch=='*')return val2*val1;
    if(ch=='-')return val1-val2;
    if(ch=='/')return val1/val2;
}
int main()
{
string s="7+(8-5)*4/3+1";//infix expression
//for evaluation we need two stacks
stack<int>val;
stack<int>op;
for(int i=0;i<s.size();i++)
{
    //to check whether digit or op calculate its ascii val
    int ascii=(int)s[i];
    if(ascii>=48 &&ascii<=57)val.push(s[i]-48);
  else{
     if(op.size()==0) op.push(s[i]);
        else if(s[i]=='(')op.push(s[i]);
       else if( op.top()=='(')op.push(s[i]);
       else if(s[i]==')')
       {
         while(op.top()!='(')
            {
                //kam karte raho
                  char ch=op.top();//operator
             op.pop();
             int val2=val.top();
             val.pop();
             int val1=val.top();
             val.pop();
             int ans=solve(val1,val2,ch);
             val.push(ans);
            }
            op.pop();
       }
       else if(pri(op.top())<pri(s[i]))op.push(s[i]);

        else {//we have to work
        //val1 op val2
        
        while(op.size()>0&&pri(op.top())>=pri(s[i])&&s[i]!=')'||s[i]!='(')
        {
             char ch=op.top();//operator
             op.pop();
             int val2=val.top();
             val.pop();
             int val1=val.top();
             val.pop();
             int ans=solve(val1,val2,ch);
             val.push(ans);
        }
        op.push(s[i]);
            
        
    }
}
}
//the operator stack can have still some values jab tak stack null  na hojaye kam karte raho
while(op.size()>0)
{
    //kam karte raho
     char ch=op.top();//operator
             op.pop();
             int val2=val.top();
             val.pop();
             int val1=val.top();
             val.pop();
             int ans=solve(val1,val2,ch);
             val.push(ans);
}
cout<<val.top()<<endl;
cout<<7+(8-5)*4/3+1;
return 0;
}