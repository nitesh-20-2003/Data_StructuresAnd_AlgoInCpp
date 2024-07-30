#include<iostream>
#include<vector>
using namespace std;
void helper(vector<int>v,int arr[],int n,int target,vector<vector<int>>&ans,int idx)
{
    if(target==0)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    if(target<0)
    return;
    for(int i=idx;i<n;i++)
    {
        v.push_back(arr[i]);
        helper(v,arr,n,target-arr[i],ans,i);
        v.pop_back();
    }
    /*
     for(int i=idx;i<candidates.size();i++)
            {
                v.push_back(candidates[i]);
                 helper(ans,v,candidates,i , target- candidates[i]);
                v.pop_back();
            }
    */

}
int main()
{
int arr[]={2,3,5};
int n=sizeof(arr)/sizeof(arr[0]);

int target =8;
vector<int>v;
vector<vector<int>>ans;
helper(v,arr,n,target,ans,0);

return 0;
}