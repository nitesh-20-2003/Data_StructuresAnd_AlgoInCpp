/*Given a sorted binary array, efficiently count the total number of 1’s in it.
Input 1 : a = [0,0,0,0,1,1]
Output 1: 2
*/
#include<iostream>
using namespace std;
int main()
{
    int a[]={0,0,0,0,0,0,1};
    int lo=0;
    int n=sizeof(a)/sizeof(a[0]);
      int hi=n;
int firstidx=-1;
while(lo<=hi)
{
    int mid=(lo+hi)/2;
    if(a[mid]==1)
    {
        if(a[mid-1]==1)
        hi=mid-1;
        else
        {
            firstidx=mid;
            break;
        }
    }
    else if(a[mid]==0)
    lo=mid+1;
}
if(firstidx==-1)
cout<<0;
else cout<<(n-firstidx);
}