#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"enter the elements of first array:"<<endl;
    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
          
          }
           for(int i=0;i<3;i++)
    {

        for(int j=i+1;j<3;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
          }}
          cout<<"transpose of given array is:"<<endl;
        for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
          }   

    
    }