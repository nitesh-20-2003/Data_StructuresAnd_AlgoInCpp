#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,2,4,5};
    int a[5];
    for(int i=4;i>=0;i--)
    {
        for(int j=0;j<=4;j++)
        {
            a[j]=arr[i];
        
        }
        for(int i=0;i<=4;i++)
        {
            arr[i]=a[i];

        }
        for(int i=0;i<=4;i++)
        {
            cout<<arr[i];
        }
    }
}