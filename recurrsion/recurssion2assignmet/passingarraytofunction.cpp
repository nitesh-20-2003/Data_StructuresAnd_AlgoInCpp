#include<iostream>
using namespace std;
void display(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
int arr[]={1,2,3,4,5,6};
display(arr,6);
return 0;
}