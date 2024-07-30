#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int m=n-1;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==j||(i+j==m)){
            cout<<a[i][j]<<" \t  ";
           }
           else cout<<" \t ";
        }  
        cout<<endl;
    }

}