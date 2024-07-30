#include<iostream>
using namespace std;
int main(){
    int a[2][2],b[2][2];
    cout<<"enter the elemets of first array:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];

        }}
         cout<<"enter the elemets of second array:"<<endl;
     
         
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
          cin>>b[i][j];
            
        }

    }
    
    cout<<"sum of both arrays is :"<<endl;
   
     for(int i=0;i<2;i++)
     {
        for(int j=0;j<2;j++)
        {
        cout<<b[i][j]+a[i][j]<<" ";
            
        }
        cout<<endl;

    }
}