#include<bits/stdc++.h>
using namespace std;
int main()
{
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
int k;
cout<<"enter the value of k from top"<<endl;
cin>>k;
stack<int>temp;
while(s.size()-1>k)
{
    temp.push(s.top());
    s.pop();
}
s.pop();
while(temp.size()>0)
{
    s.push(temp.top());
    temp.pop();

}
while(s.size()>0)
{
    cout<<s.top()<<" ";
    s.pop();
}
return 0;
}