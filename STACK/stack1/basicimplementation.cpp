#include<bits/stdc++.h>
using namespace std;
int main()
{
stack<int>s;
stack<int>temp;
cout<<s.size()<<endl;
s.push(10);
cout<<s.size();
cout<<endl;
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.pop();
cout<<s.size()<<endl;
int m=s.size();
// while(m) with this we loose our stack
// {
//     cout<<s.top()<<" ";
//     s.pop();
//    m--;
// }
while(s.size()>0)//making copy of elements of s in temp to preserve
{
    cout<<s.top()<<" ";
    temp.push(s.top());
    s.pop();
}
cout<<endl;
while(temp.size()>0)// again putting elements from temp to s;
{
   s.push(temp.top());
    temp.pop();
}
while(s.size()>0)
{
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;
cout<<"push 70 at buttom:"<<endl;
stack<int>c;
while(s.size()>0)//making copy of elements of s in temp to preserve
{
    c.push(s.top());
    s.pop();
}
cout<<endl;
while(c.size()>0)// again putting elements from temp to s;
{
   s.push(c.top());
    c.pop();
}
while(s.size()>0)
{
    cout<<s.top()<<" ";
    s.pop();
}
return 0;
}