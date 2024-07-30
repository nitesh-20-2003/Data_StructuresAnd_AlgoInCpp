#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int pri(char op)
{
    if(op=='+'||-op=='-')return 1;
    else if(op=='*'||op=='/')return 2;
}
string solve(string val1,string val2 ,char ch)
{
    string ans="";

    return ans+ch+val1+val2;
}
int main()
{
string s="a* (b+a))+(b/d)*a+z";//infix expression
//for evaluation we need two stacks
stack<string>val;
stack<char>op;
for(int i=0;i<s.size();i++)
{
    //to check whether digit or op calculate its ascii val
    int ascii=(int)s[i];
    if(ascii>=48 &&ascii<=57||ascii>=97&&ascii<=122)val.push(to_string(s[i]-48));
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
             string val2=val.top();
             val.pop();
            string val1=val.top();
             val.pop();
             string ans=solve(val1,val2,ch);
             val.push(ans);
            }
            op.pop();
       }
       else if(pri(op.top())<pri(s[i]))op.push(s[i]);
       else 
       { 
        while(op.size()>0&&pri(op.top())>=pri(s[i])&&s[i]!=')'&&s[i]!='(')
        {   //kam karte raho
                  char ch=op.top();//operator
             op.pop();
             string val2=val.top();
             val.pop();
            string val1=val.top();
             val.pop();
             string ans=solve(val1,val2,ch);
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
             string val2=val.top();
             val.pop();
            string val1=val.top();
             val.pop();
             string ans=solve(val1,val2,ch);
             val.push(ans);
}
cout<<val.top()<<endl;
cout<<s;
return 0;
}