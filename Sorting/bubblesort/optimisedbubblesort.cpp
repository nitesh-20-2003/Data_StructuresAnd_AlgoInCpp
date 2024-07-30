#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,2,1,4,3};
    for(int i=0;i<4;i++){
        bool flag=true;
        for(int j=0;j<4-i;j++){
          {  if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            flag=false;}
        }
        if(flag==true)
        break;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    }
    
