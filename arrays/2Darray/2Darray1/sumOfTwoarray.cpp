#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int a[3][3],b[3][3],c[3][3];
    cout<<"enter the elements of first array :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }

    }
      cout<<"enter the elements of second array :"<<endl;
        
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            cin>>b[i][j];
        }

    }
    cout<<endl;
    
       
     for(int i=0;i<3;i++)
        {
        for(int j=0;j<3;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }

    }

    for(int i=0;i<3;i++)
        {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
         }


    }