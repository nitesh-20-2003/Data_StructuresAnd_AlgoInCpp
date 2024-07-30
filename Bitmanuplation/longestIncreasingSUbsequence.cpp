/*Input: nums = [1,3,5,4,7]
Output: 2
Explanation: The two longest increasing subsequences are [1, 3, 4, 7] and [1, 3, 5, 7].*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void helper(vector<int>&v,vector<vector<int>>&ans,int idx,int len,vector<int>c)
{
    if(idx==v.size())
    {
        ans.push_back(c);
        return;
    }
    int x=v[idx];
  

 
        if(v[idx+1]>x&&idx==(v.size()-1))helper(v,ans,idx+1,len,c);
           c.push_back(x);
     if(v[idx+1]>x&&idx==(v.size()-1))helper(v,ans,idx+1,len,c);
     }
    
int main()
{
int arr[]={1,3,5,4,7};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>v(arr,arr+n);
vector<int>c;
vector<vector<int>>ans;
int len=0;
helper(v,ans,0,len,c);
cout<<ans[0][0];
cout<<"hello";
for(int i=0;i<ans.size();i++)
{
    for(int j=0;j<ans[0].size();j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
