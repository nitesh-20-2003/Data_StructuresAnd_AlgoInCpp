#include<iostream>
using  namespace std;
int main()
{
    int arr[]={1,2,2,3,3,3,3,4,5};
    int lo=0;
    int hi=8;
    int target=0;
    int idx=-1;
     int lo2=0;
    int hi2=8;
    int target=0;
    int idx2=-1;
    while(lo<=hi)
    {
        int mid1=lo+(hi-lo)/2;
        if(target==arr[mid1])
        {
            if(arr[mid1-1]==target)
            {
                hi=mid1-1;

            }
            else
            {
                idx=mid1;
                break;
            }
        }
        else if(arr[mid1]>target)
        hi=mid1-1;
        else
        lo=mid1+1;

    }
    cout<<"first occurence of target is :"<<idx;
    
}
