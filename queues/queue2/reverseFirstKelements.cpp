#include<bits/stdc++.h>
using namespace std;
int main()
{
stack<int>helper;
queue<int>a;
vector<int>hel;
a.push(1);
a.push(2);
a.push(3);
a.push(4);
a.push(5);
a.push(6);
a.push(7);
a.push(8);
a.push(9);
a.push(10);
int m=a.size();
for(int i=0;i<m;i++)
{
    cout<<a.front()<<" ";
    a.push(a.front());
    a.pop();
}
cout<<endl;
//pop first k elements from the queue
int k=6;
for(int i=0;i<k;i++)
{
    helper.push(a.front());
    a.pop();

}
while(helper.size()>0)
{
    a.push(helper.top());
    helper.pop();
}
//queue becames->7 8 9 10 6 5 4 3 2 1
//push  7 8 9 10 remaining elements in back of queue
for(int i=0;i<m-k;i++)
{
    a.push(a.front());
    a.pop();
}
 m=a.size();
for(int i=0;i<m;i++)
{
    cout<<a.front()<<" ";
    a.push(a.front());
    a.pop();
}
return 0;
}