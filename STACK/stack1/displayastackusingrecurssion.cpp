#include<bits/stdc++.h>
using namespace std;
void display(stack<int>&s)
{
    if(s.size()==0)return;
    int x=s.top();
    cout<<x<<" ";
    s.pop();
    display(s);
    s.push(x);//so that list does not change;

}
void rev(stack<int>&s)
{
    if(s.size()==0)return;
    int x=s.top();
    s.pop();
    rev(s);
    cout<<x<<" ";
    s.push(x);

}
int main()
{
stack<int>s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
display(s);
cout<<endl;
rev(s);
return 0;
}