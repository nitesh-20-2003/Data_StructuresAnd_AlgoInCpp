#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,2,3,3,3,3,4,4,5,8,9};
    int lo=0;
    int target=3;
    int hi=11;
    int index=-1;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;

        if(arr[mid]==target)
        {
            if(arr[mid+1]==target)
            lo=mid+1;
      
        else
           { 
            index=mid;
            break;
            }
        }
        else if(arr[mid]>target)
        hi=mid-1;
        else
        lo=mid+1;

    }
    cout<<"last index is :"<<index;
}