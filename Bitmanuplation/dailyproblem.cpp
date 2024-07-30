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
        for(int i=0;i<v.size();i++)
        {
            cout<<c[i];
        }
        cout<<endl;
        return;
    }
       helper(v,ans,idx+1,len,c);
          c.push_back(v[idx]);
    helper(v,ans,idx+1,len,c);
    return;
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
return 0;
}