#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    string s,t;
    cout<<"enter the value of two strings "<<endl;
    cin>>s>>t;
    vector<int>v(150,1000);
    for(int i=0;i<s.size();i++)
    {
        if(v[i]==1000)
        v[i]=s[i]-t[i];
        else if (v[i]!=s[i]-t[i])
        break;
    }

}