#include<iostream>
using namespace std;
int main(){
    int a,s;
    cin>>s>>a;
    int *ptr1=&a;
    int *ptr=&s;
    cout<<ptr1-ptr;
}