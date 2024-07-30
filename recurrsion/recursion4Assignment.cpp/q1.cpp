/*Given an integer array containing unique numbers, return power set, containing all the subsets of
the set.*/
#include<iostream>
#include<vector>
using namespace std;
void helper(int arr[],int size,vector<int>v,int idx,vector<int>&ans)
{
    if(idx==size)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        } 
        cout<<endl;
        return;
    }
    int x=arr[idx];
    helper(arr,size,v,idx+1,ans);
    v.push_back(arr[idx]);
      helper(arr,size,v,idx+1,ans);

}
int main()
{
int arr[]={1,2};
int  n=sizeof(arr)/sizeof(arr[0]);
vector<int>v;
vector<int>ans;
helper(arr,n,v,0,ans);
return 0;
}