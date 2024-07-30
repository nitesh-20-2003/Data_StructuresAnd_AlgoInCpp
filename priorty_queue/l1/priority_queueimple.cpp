#include<bits/stdc++.h>
using namespace std;
int main()
{
priority_queue<int>hp;//maxheap

hp.push(1);
hp.push(31);
cout<<hp.top();
cout<<endl;
cout<<hp.empty();
return 0;
}