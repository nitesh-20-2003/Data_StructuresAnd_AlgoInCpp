#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<vector<int>>v;
vector<int>ans;
ans.push_back(0);
ans.push_back(1);
v.push_back(ans);
vector<int>ans2;
ans2.push_back(2);
ans2.push_back(3);
v.push_back(ans2);
for(int i=0;i<v.size();i++)
{
    for(int j=0;j<2;j++)
    {
        cout<<v[i][j]<<" ";
    }
}
cout<<endl;
swap(v[0],v[1]);
for(int i=0;i<v.size();i++)
{
    for(int j=0;j<2;j++)
    {
        cout<<v[i][j]<<" ";
    }
}
return 0;
}