#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,1,2,4,5,6};
    int max1=INT_MIN;
    int max2=max1;
    for(int i=0;i<=5;i++){
    if(arr[i]>max1){
     max2=max1;
     max1=arr[i] ;  
    }
    if( arr[i] >max2&&max2!=max1){
        max2=arr[i];
    break;
    }

    }
    cout<<max2;
}