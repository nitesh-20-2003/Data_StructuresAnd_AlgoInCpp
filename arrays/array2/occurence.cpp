#include<iostream>// last occuring index of given no
#include<vector>
using namespace std;
int main(){
vector<int>v;
int m;
int s;
cout<<" enter the value of number: ";
cin>>s;
for(int i=0;i<6;i++){
    int a;
    cin>>a;
    v.push_back(a);

}
for( int i=0;i<v.size();i++){
    if(s==v[i]){
      m=i;  
    }
}
cout<<m;
}