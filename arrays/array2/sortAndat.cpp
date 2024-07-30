#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
     v.push_back(6);
    
    
        v.push_back(7);

        v.push_back(3);
        v.push_back(0);
        for(int i=0;i<=3;i++){
            cout<<v.at(i)<<" ";
          }
          cout<<endl;
    sort(v.begin(),v.end());







}
