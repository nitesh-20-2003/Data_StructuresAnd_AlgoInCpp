#include<bits/stdc++.h>
using namespace std;
int main()
{
queue<int>s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
vector<int>a;
while(s.size()>0)
{
   a.push_back(s.front());
    s.pop();
}
for(int i=0;i<a.size();i++)
{
    if(i%2==0)s.push(a[i]);

}
int m=s.size();
for(int i=0;i<m;i++)
{
    cout<<s.front()<<" ";
    s.push(s.front());
    s.pop();
}
return 0;
}