#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,5,9,15,19,21,24};
    int target=20;
    //by linear search
    // for(int i=0;i<9;i++)
    // {
    //     if(arr[i]<target)
    //     continue;
    //     else if(arr[i]>target)
    //     {
    //         cout<<"lower bound is :" <<arr[i-1]<<endl;
    //         cout<<"upper bound is :"<<arr[i];
    //         break;
    //     }
    // }
    // by binary search
    int lo=0;
    int hi=8;
    while(lo<hi)
    {
        int mid=(lo+hi)/2;
    if(arr[mid]==target)
    cout<<arr[mid];
    else if(arr[mid]>target)
    hi=mid-1;
    else
    lo=mid+1;
    
    }
    cout<<"lower bound is : "<<arr[hi]<<endl;
    cout<<"upper bound is :"<<arr[lo];
}