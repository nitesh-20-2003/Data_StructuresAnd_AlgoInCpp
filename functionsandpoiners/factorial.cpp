#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
return fact;

}
int main(){
    int n;
    cin>>n;
    cout<<"fact of first n natural no is : \n";
    for(int i=1;i<=n ;i++){
        cout<<fact(i)<<endl;
    }

}