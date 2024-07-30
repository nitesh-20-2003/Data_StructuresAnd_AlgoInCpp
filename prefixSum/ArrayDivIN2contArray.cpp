#include<iostream>
#include<vector>
using namespace std;
int main()
{

int arr[]={1,2,3,4,5,5,10};
// int sum=arr[0];
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=1;i<n;i++)

{
    arr[i]=arr[i]+arr[i-1];
}
//checking if that index exists
bool flag=false;
for(int i=1;i<n;i++)

{
    if(2*arr[i]==arr[n-1])
   {  
    flag=true;
    cout<<"yes it can exist and its index is :  "<<i;
    break;
   }
}
if(flag==false)
cout<<"not it is not possible to devide array";
return 0;
}