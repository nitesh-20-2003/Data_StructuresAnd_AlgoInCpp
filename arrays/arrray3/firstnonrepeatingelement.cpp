#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    bool flag=false;
   
    cout<<" enter the size of array :";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
       v.push_back(x);
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        int j;
        for(int j=0;j<n;j++)
        {
            if(v[i]==v[j]&&i!=j)
               break;
           
        }
    
    if(j==n)
    cout<<v[i]<<endl;
    flag=true;
    break;
    }
    if(flag==false)
    cout<<" non repeating elemet does not exist";

}