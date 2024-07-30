#include<iostream>
using namespace std;
int main(){
    int a;
    int *p=&a;
    cout<<p<<endl;
    p++;
    cout<<p;
}