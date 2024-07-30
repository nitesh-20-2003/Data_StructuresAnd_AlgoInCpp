#include<iostream>
using namespace std;
int print(int arr[],int n,int target,int m)
{
    if(m>n)
    return -1;
    if(target==arr[m])
    return m;
   return (print(arr,n,target,m+1));
   
}
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9,0};
 cout<<print(arr,10,12,0);
return 0;
}