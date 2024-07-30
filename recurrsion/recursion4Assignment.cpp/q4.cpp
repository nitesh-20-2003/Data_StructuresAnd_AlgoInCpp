// Program to convert a decimal number to binary.
#include<iostream>
#include<vector>
using namespace std;
void helper(int n,vector<int>&v,int x)
{
    if(n==0)
    {
        for(int i=v.size()-1;i>=0;i--)
        {
            cout<<v[i];
        }
        cout<<" ";
        return;
    }
    else
   { v.push_back(n%2);
     return helper(n/2,v,2);
    }
    
}
int main()
{
int n=10;
vector<int>v;
helper(n,v,2);
return 0;
}