#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n][n];
    cout<<"enter the size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }

    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;

        }
        
    }
    int minc=0;
    int maxc=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

}
}
}