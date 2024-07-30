#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the value of character  :\n";
    cin>>ch;
    int a=(int)ch;
    if((a>=65&&a<=90)||(a>=97&&a<=122))
    
    {
    cout<<"given character is alphabet\n"
        <<"and its ascii value is \t"<<a;
    
    }
    else
    cout<<"given character is not alphabet :\n"
    <<"and its ascii value is \t"<<a;
    return 0;
}