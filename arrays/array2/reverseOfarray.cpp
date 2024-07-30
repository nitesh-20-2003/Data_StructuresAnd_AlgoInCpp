# include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;
     int n,c;
     cin>>n;
     cout<<endl;
     for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
             }
             cout<<endl;
             
    // int i=0;
    //     int j=v.size()-1;
    //     while(j>=i){
    //         c=v[i];
    //         v[i]=v[j];
    //         v[j]=c;
    //         i++;
    //         j--;}
            for(int i=0,j=v.size()-1;j>=i;i++,j--)
            {

             c=v[i];
            v[i]=v[j];
            v[j]=c;

            }

        cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}