#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_set<int>s;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(5);//set store only unique elements
//printing elements are stored in random order and so printed
for(auto /*data tupe which can be int here*/ele:s)cout<<ele<<" ";
return 0;
}