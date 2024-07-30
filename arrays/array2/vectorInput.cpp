#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
   
    for(int i=0;i<=5;i++){
         int x;//became first member of vector array'
    cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    for(int i=0;i<=5;i++){
        cout<<v[i];
    }
}