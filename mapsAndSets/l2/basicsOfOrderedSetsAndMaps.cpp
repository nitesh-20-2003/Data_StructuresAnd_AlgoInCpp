#include<bits/stdc++.h>
using namespace std;
int main()
{
set<int>s;
s.insert(1);
s.insert(4);
s.insert(6);
s.insert(2);
s.insert(1);

for(int ele:s)cout<<ele<<" ";
map<string,int>m;
pair<string,int>p;
m["nitesh"]=71;
m["nitin"]=72;
m["mukul"]=65;
m.erase("mukul");
cout<<endl;
for(auto p:m)
{
    cout<<p.first<<" "<<p.second<<endl;
}
return 0;
return 0;

}