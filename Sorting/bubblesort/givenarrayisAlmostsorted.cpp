//Check if the given array is almost sorted. (elements are at-most one position away)
#include<iostream>
#include<algorithm>
using namespace std;
int main()
  {  
    bool flag1=true;
    int arr[]={4,2,7,9,8};
   int a[5];
   for(int i=0;i<5;i++)
   {
    a[i]=arr[i];
   }
for(int i=0;i<4;i++)
{
       bool flag=true;
    for(int j=0;j<4-i;j++)
    {
        if(arr[j]>arr[j+1])
  {      swap(arr[j],arr[j+1]);
            flag=false;
  }
    }
    if(flag==true)
    {
        break;
    }
}
for(int i=0;i<5;i++)
{
    if(i==0)
    {
      if(a[i]!=arr[i]&&a[i]!=arr[i+1])
    {  flag1=false;
    break;
    }
    }
     else if(i==4)
    {
  if(a[i]!=arr[i]&&a[i]!=arr[i-1])
    {  flag1=false;
    break;
    }
    }
   else
{
  if(a[i]!=arr[i]&&a[i]!=arr[i-1]&&a[i]!=arr[i+1])
{
    flag1=false;
    break;
}

}
    }
    if(flag1==false)
cout<<"not nearly sortd";
else 
cout<<" yes they are nearly sorted ";
    }


