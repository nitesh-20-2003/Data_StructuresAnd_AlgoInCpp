/*we know kth largest and kth smallest has relation as
if nums=1,2,3,4,5,6,7 -> 3 largest or 5 smallest element is 5 have relation as 3+5=n+1 ,(kthlargest =n+1-kthsmallest);
*/
#include<iostream>
using namespace std;
int partition(int arr[],int si,int en)
{
    int count=0;
    int pivotele=arr[(si+en)/2];
    for(int i=si;i<=en;i++)
    {
        if(i==(si+en)/2)continue;
        if(arr[i]<=pivotele)count++;//vimp to include <= if we have single size array it will give error
    }
    int pivotidx=count+si;
    swap(pivotele,arr[pivotidx]);
    int i=si;
    int j=en;
    while (i<pivotidx&&j>pivotidx)
    {
        if(arr[i]<=arr[pivotidx])i++;
        if(arr[j]>arr[pivotidx])j--;
        if(arr[i]>arr[pivotidx]&&arr[j]<=arr[pivotidx])
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
int ksmallest(int arr[],int si,int ei,int k)
{
    int pi=partition(arr,si,ei);
    if(pi+1==k)return arr[pi];//base case
    else if(pi+1<k)ksmallest(arr,pi+1,ei,k);
    else
    return ksmallest(arr,si,pi-1,k);
}
int klargest(int arr[],int si,int ei,int k)
{
    int n=ei+1;
    return ksmallest(arr,si,ei,n+1-k);
}
int main()
{
int arr[]={1,2,3,4,5,6,7,8};
int n=sizeof(arr)/sizeof(arr[0]);
int k=6;
cout<<klargest(arr,0,n-1,k);
return 0;
}
