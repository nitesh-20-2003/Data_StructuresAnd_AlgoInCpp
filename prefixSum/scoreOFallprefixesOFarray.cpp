#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
int nums[]={1,1,2,4,8,16};
int  n=sizeof(nums)/sizeof(nums[0]);
int max=nums[0];
vector<int>ans(n);
int prefix=0;
for(int i=0;i<n;i++)
{
    if(nums[i]>=max)
      max=nums[i];
    ans[i]=nums[i]+max+ans[i-1];
  
}
for(int ele:ans)
cout<<ele<<" ";
return 0;
}