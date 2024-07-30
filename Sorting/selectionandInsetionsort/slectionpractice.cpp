#include<iostream>
#include<climits>
using namespace std;
int main()
{
int arr[]={1,3,2,4,5};
for(int i=0;i<4;i++)
{
    int min=INT_MAX;
    int idx=-1;
    for(int j=i;j<4;j++)
 {   if(arr[j]<min)
  {  min=arr[j];
    idx=j;
    }
    }
    swap(arr[i],arr[idx]);
}
for(int ele : arr)
cout<<ele <<" ";
}
