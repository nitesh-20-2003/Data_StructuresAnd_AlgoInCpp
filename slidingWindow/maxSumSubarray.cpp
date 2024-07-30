#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    //brut force
int arr[]={7,1,2,5,8,4,9,3,6};
int k=3;
int sum=0;
int max=INT_MIN;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<=n-k;i++)
{
    for(int j=0;j<n;j++)
    {
      if(k>0) 
       {
        sum+=arr[j];
        k--;
        }
        else
        {
            if(max<sum)
            max=sum;
            sum=0;
            k=3;
        }
    }
}
cout<<max;
return 0;
}