#include<bits/stdc++.h>
using namespace std;
void print(stack<int>&s)
{
    stack<int>temp;
while(s.size()>0)
{
    cout<<s.top()<<" ";
    temp.push(s.top());
    s.pop();
}
while(temp.size()>0)
{
    s.push(temp.top());
    temp.pop();
}
cout<<endl;
}
int main()
{
stack<int>s;
stack<int>temp;
vector<int>v;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);

cout<<"orignal stack is :"<<endl;
print(s);
cout<<" putting 25 at 3 idx"<<endl;

while(s.size()>3-1)
{
    v.push_back(s.top());
    s.pop();
   
}

s.push(25);
for(int i=v.size()-1;i>=0;i--)
{
    s.push(v[i]);
}
print(s);

return 0;
}