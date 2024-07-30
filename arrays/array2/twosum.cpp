#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int m,a;
    int i,j;
    bool flag=false;
    cout<<"enter the value of no:  ";
    cin>>m;
    for(int i=0;i<6;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<endl;
for(int i=0;i<v.size()-1;i++)
{
    for(j=1;j<v.size()-1;j++)
    {
        if((m==v[i]+v[j]))
        { 
            
            cout<<i<<" "<<j<<endl;
              
}
        
        }
        
        }
}
    





