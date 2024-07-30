#include<iostream>
#include<vector>
using namespace std;
void helper(int arr[],int size,vector<int>v,int idx,bool flag)
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
    if(v.size()==0)
    {
       helper(arr,size,v,idx+1,true);
        v.push_back(arr[idx]);
        helper(arr,size,v,idx+1,true);
    }
    else
    {
         if(flag==true)helper(arr,size,v,idx+1,true);
        v.push_back(arr[idx]);
        helper(arr,size,v,idx+1,false);
    }
}

int main()
{
int arr[]={1,2,2};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>v;
helper(arr,n,v,0,true);
return 0;
}