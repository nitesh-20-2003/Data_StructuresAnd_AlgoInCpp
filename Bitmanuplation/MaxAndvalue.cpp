#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
int arr[]={12,3,1,6,6,6,6,18,18,3,8,13,13,8};
int n=sizeof(arr)/sizeof(arr[0]);
int max=INT_MIN;
int len=0;
int i=0,j=0;
while(j<n)
{
if(arr[j]>=max&&arr[i]>=max)
{
    max=arr[i];
    len=j-i+1;
        j++;
}
else 
{
  i=j;
  i++;
  j++;
}


}
cout<<len;
return 0;
}