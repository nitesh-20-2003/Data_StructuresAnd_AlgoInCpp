#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_map<int,int>m;
int arr[]={1,1,2};
for(int i=0;i<3;i++)
{
    m[arr[i]]++;

}
for(auto x:m)
cout<<x.first<<" "<<x.second<<endl;
return 0;

}