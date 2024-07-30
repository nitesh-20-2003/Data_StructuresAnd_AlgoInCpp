#include<iostream>//min among all elements of array;
using namespace std;
int main(){
    int arr[]={2,3,5,4,0,9,8};
    int min=arr[0];
    for(int i=0;i<=6;i++){
        if(min>arr[i])min=arr[i];
    }
    cout<<min;
}