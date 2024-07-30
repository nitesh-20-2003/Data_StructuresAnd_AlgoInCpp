#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr[]={5,1,3,4,2};
int n=sizeof(arr)/sizeof(arr[0]);
//before sorting 
for(int ele:arr)
{
    cout<<ele<<" ";
}
cout<<endl;
//cycle sort
int i=0;
while(i<n)
{
    int correctidx=arr[i]-1;
    if(i==correctidx)i++;
    else swap(arr[i],arr[correctidx]);
}
for(int ele:arr)
{
    cout<<ele<<" ";
}
return 0;
}