#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
int arr[]={7,1,2,5,8,4,9,3,6};
int n=sizeof(arr)/sizeof(arr[0]);
int k=4;
int max=INT_MIN; 
int presum=0;
int cursum=0;
for(int i=0;i<k;i++)
presum+=arr[i];
int i=1;
int j=k;
while(j<n)
{
    cursum=presum+arr[j]-arr[i-1];
    if(max<cursum)
    {
        max=cursum;
    }
    presum=cursum;
    i++;
    j++;

}
cout<<max;
return 0;
}
//t.c. anlalysis in worst case o(k+n)~= o(n),for less value of k;