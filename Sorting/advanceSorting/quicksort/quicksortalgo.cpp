#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei)
{
 int count =0;
 int pivotelement=arr[si];//to improve t.c. use pivotelement as -> arr[(si+ei)/2];
    for(int i=si;i<=ei;i++)
    {
        if(i==si)continue;
        if(arr[i]<=pivotelement) count++;

    }
    int pivot=count+si;
    swap(arr[si],arr[pivot]);
    int i=si;
    int j=ei;
    while((i<pivot)&&(j>pivot))
    {
        if(arr[i]<=arr[pivot])
            i++;
     if(arr[j]>arr[pivot]) j--;
           else if(arr[i]>arr[pivot]&&arr[j]<=arr[pivot])
            {
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
    }
    return pivot;
}
void quicksort(int arr[],int si,int ei)
{
    if(si>=ei)
    return;
    //before calling partition array is ->5,1,8,2,7,6,3,4;
    int piv=partition(arr,si,ei);
    //after calling array became->7,1,3,2,5,6,8,7;
    quicksort(arr,si,piv-1);
    quicksort(arr,piv+1,ei);
}
int main()
{
int arr[]={5,1,8,2,7,6,3,4};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<"  ";
}
cout<<endl;
quicksort(arr,0,n-1);
cout<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<"  ";
}

return 0;
}