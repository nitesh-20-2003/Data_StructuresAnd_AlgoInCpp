#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    
     // v[1]=8;// garbage value is1869770844  try to use push _back instead
v.push_back(7);

        v.push_back(3);
          v.push_back(0);
          v[0]=33;
                cout<<v[0]<<"  ";
                cout<<v[1]<<"  ";
                cout<<v[2]<<"  ";
                cout<<v[3]<<"  ";
}