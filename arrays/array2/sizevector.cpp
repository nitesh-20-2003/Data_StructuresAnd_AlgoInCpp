#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    
     cout<<v.size();
v.push_back(7);
     cout<<v.size();
        v.push_back(3);
             cout<<v.size();
          v.push_back(0);
               cout<<v.size();
          v[0]=33;
               
//                 cout<<v[0]<<"  ";
//                 cout<<v[1]<<"  ";
//                 cout<<v[2]<<"  ";
//                 cout<<v[3]<<"  ";
}