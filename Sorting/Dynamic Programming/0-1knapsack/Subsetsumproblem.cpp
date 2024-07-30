#include<bits/stdc++.h>
using namespace std;
bool ans(vector<int>&nums,int sum,int curr,int i)
{
    if(curr+nums[i]==sum)return true;
    if(i==nums.size())return false;
   // picked 
     bool picked=false;
    if(curr+nums[i]<sum)
     picked= ans(nums,sum,curr+nums[i],i+1);
    // not picked
     bool notpicked=ans(nums,sum,curr,i+1);
     if(picked||notpicked)
     return true;
    return false;
}
int main()
{
vector<int>nums={3, 34, 4, 12, 5, 2};
int sum;
sum=9;
if(ans(nums,sum,0,0))
cout<<"yes"<<endl;
else cout<<"no"<<endl;
return 0;
}