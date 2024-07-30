#include<iostream>
#include<climits>
using namespace std;
void print(int arr[],int n,int x)
{
if(x==n)
return;
cout<<arr[x]<<"  ";
print(arr,n,x+1);
}
void printmax(int arr[],int n,int x,int max)
{
    if(x==n)
    {
        cout<<max;
        return;
    }
    if(arr[x]>max)
    max=arr[x];

    printmax(arr,n,x+1,max);
}
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9};
int n=9;
int x=0;
print(arr,n,x);
cout<<endl;
cout<<"max value is :"<<endl;
printmax(arr,n,x,INT_MIN);

return 0;
}