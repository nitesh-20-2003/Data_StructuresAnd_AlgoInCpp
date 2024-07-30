#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        v.push_back(i);
    }
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";

}}