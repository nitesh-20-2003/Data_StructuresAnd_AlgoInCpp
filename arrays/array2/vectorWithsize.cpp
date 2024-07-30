#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);//during this 
    for(int i=0;i<=4;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>a(5,5);
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
}