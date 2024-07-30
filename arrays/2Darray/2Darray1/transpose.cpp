#include<iostream>
using namespace std;
int main(){
    int arr[2][3],t[3][2];
    for(int i=0;i<2;i++)
    {// row wise printing

        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        
    }
    cout<<endl;
     for(int j=0;j<3;j++){//column wise printing
        for(int i=0;i<2;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
     for(int i=0;i<3;i++)
    {// transpose finding anothre methdo;

        for(int j=0;j<2;j++)
        {
            t[i][j]=arr[j][i];
        
    }}
  for(int i=0;i<3;i++)
    {

        for(int j=0;j<2;j++)
        {
           cout<<t[i][j]<<" ";
        
    }
    cout<<endl;
    }





}