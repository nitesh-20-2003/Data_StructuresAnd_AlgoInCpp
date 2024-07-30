#include<iostream>
#include<vector>
using namespace std;
void subst(int arr[],int n,int x,vector<int>v)
{
    if(x==n)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    int idx=arr[x];
    subst(arr,n,x+1,v);
    v.push_back(idx);
     subst(arr,n,x+1,v);

}
int main()
{
int arr[]={1,2,3};
vector<int>v;
int n=3;
subst(arr,n,0,v);
return 0;
}