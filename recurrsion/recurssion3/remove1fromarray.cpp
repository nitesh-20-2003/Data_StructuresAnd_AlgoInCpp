#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n,int idx,vector<int>&v)//either we use by call or by refrence kuch farak nahi padega
{
    if(idx==n)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    int x=arr[idx];
    if(x==1)
    print(arr,n,idx+1,v);
    else
 {   v.push_back(arr[idx]);
    print(arr,n,idx+1,v);
    v.pop_back();
}
return ;
}
int main()
{
int arr[]={1,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>v;
print(arr,n,0,v);
for(int ele:v)
{
    cout<<ele<<endl;
}
return 0;
}