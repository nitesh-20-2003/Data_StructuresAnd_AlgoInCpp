#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of three no\n";

    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"first no is greatest\n";

        }
        else
        cout<<"third number is greatest\n";
}
if(b>a)
{
    if(b>c)
    {
        cout<<"second no is greatest\n";
    }
    else
    cout<<"third no is greatest\n";

    }

    
  
    return 0;
}