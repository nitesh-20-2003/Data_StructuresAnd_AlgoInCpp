#include<iostream>
using namespace std;
int main(){
    int m;
    
    cout<<" enter the value of no rows of first matrix: ";
    cin>>m;
     int n;
    cout<<" enter the value of no colomuns of first matrix: ";
    cin>>n;
     int p;
    cout<<" enter the value of no rows of second matrix: ";
    cin>>p;
     int q;
    cout<<" enter the value of no colomuns of second matrix: ";
    cin>>q;
     int c[m][q];
    if(n==p)
    {
int a[m][n];
int b[p][q];
cout<<" enter the elements of first array:"<<endl;
for(int i=0;i<m;i++){
    for(int j=0;i<n;j++){
        cin>>a[i][j];
    }
}
    cout<<" enter the elements of second array:"<<endl;
for(int i=0;i<p;i++){
    for(int j=0;i<q;j++)
    {
        cin>>b[i][j];
    }
}       
             
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++)
        {
            c[i][j]=a[i][j]*b[j][i];
            
        }
    }
    }
    else cout<<" matrix mul not possible";
    cout<<"sum of both matrices is:"<<endl;
for(int i=0;i<m;i++){
        for(int j=0;j<q;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;;
    }
}


