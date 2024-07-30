#include<iostream>
using namespace std;
int main(){
    int a,s,d; 
    cin>>a>>s>>d;
    cout<<"\n";
    if((a>s)&&(a>d))
    cout<<"first number is greatest";
    if((s>a)&&(s>d))
    cout<<"second number is greatest";
    if((d>a)&&(d>s))
    cout<<"third number is greatest";



}