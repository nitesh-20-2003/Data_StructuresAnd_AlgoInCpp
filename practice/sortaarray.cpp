#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int>v;
v.push_back(9);
v.push_back(4);
v.push_back(8);
v.push_back(1);
v.push_back(6);
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

}