#include<iostream>
#include<vector>
using namespace std;
void subarray(int arr[],int size,vector<int>v,int idx)
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
   subarray(arr,size,v,idx+1);//left call
    if(v.size()==0||v[v.size()-1]==arr[idx-1])
   { 
     v.push_back(x);
    subarray(arr,size,v,idx+1);//right call
   } 
//    else if(v[v.size()-1]==arr[idx-1])
//    {
//     v.push_back(x);
//     subarray(arr,size,v,idx+1);
//    }

}
int main()
{
int arr[]={1,2,3,4};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>v;
subarray(arr,n,v,0);
return 0;
}