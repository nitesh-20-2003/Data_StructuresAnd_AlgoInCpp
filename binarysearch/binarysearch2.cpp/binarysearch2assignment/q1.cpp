// Write a program to apply binary search in array sorted in decreasing order.
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,3,2,1,0};
    int target =1;
    int lo=0;
    int n=5;
    int ans=-1;

    int hi=n-1;
    while (lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            break;
        }
        else if(arr[mid]>target)
        lo=mid+1;
        else
        hi=mid-1;
    }
    cout<<ans;

}