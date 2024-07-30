#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,2,3,6,7,8,9,11};
    int lo=0;
    int hi=8;
    int ans=-1;

    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(arr[mid]==mid)
        {
            lo=mid+1;

        }
        else 
        {
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<"first index is :"<<ans;
}