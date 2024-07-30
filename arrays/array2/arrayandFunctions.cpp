#include<iostream>
using namespace std;
void display(int *a,int size){
    a[0]=5;
    for(int i=0;i<=size-1;i++){
        cout<<*a<<endl;
        a++;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    display(arr,6);
}