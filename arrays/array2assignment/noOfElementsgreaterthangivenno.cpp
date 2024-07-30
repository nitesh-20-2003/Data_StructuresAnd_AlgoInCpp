#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8};
    int n;
    int count=0;
    cin>>n;
    for(int i=0;i<8;i++){
        if(a[i]>n)count++;
    }
    cout<<count;
}