#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string>v;
    int idx=-1;
    v.push_back("0123");
     v.push_back("0023");
      v.push_back("456");
       v.push_back("00182");
       v.push_back("940");
      v.push_back("901");
       int n=v.size();
        int max=stoi(v[0]);
for(int i=1;i<n;i++ )
{
    int x=stoi(v[i]);
    if(x>max)
    max=x;
    idx=i;
}
cout<<"no is " <<max<<endl<<" its index is :   "<<idx;

return 0;
}