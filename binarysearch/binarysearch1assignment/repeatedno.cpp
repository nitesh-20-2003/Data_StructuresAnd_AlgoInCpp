/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
inclusive in sorted order.
There is only one repeated number in nums, return this repeated number.
Input 1: arr[] = {1,2,3,3,4}
Output 1: 3
Input 2: arr[] = {1,2,2,3,4,5}
Output 2: 2
*/
#include<iostream>
using namespace std;
int main()
{
    int ans=-1;
    int arr[] =  {1,2,2,3,4,5};
    int lo=0;
    int hi=5;
    //for array starting with non zero element;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        
       if(arr[mid]==mid)
       hi=mid-1;
       else if(arr[mid]!=mid)
       {
                if(arr[mid+1]!=mid+1)
                lo=mid+1;
      else 
      { 
        ans=arr[mid];
       break;
       }
       }

    }
    cout<<"repeated element is :"<<ans;
}