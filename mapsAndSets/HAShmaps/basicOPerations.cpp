#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_map<string,int>m;
pair<string,int>p1;
pair<string,int>p2;
pair<string,int>p3;
pair<string,int>p4;
p1.first="nitesh";
p1.second=71;
p2.first="hitesh";
p2.second=72;
p3.first="mitesh";
p3.second=73;
p4.first="mithilesh";
p4.second=74;
m.insert(p1);
m.insert(p2);
m.insert(p3);
m.insert(p4);
for(auto p:m)
{
    cout<<p.first<<" "<<p.second<<endl;
}
return 0;
}