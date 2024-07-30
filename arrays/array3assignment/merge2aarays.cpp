#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
vector<int>v;
cout<<" enter the size of first array :";
cin>>n;
for(int i=0;i<n;i++)
{
    int m;
    cin>>m;
    v.push_back(m);
}
int s;
vector<int>v1;
cout<<" enter the size of second array :";
cin>>s;
for(int i=0;i<n;i++)
{
    int m;
    cin>>m;
    v1.push_back(m);
}
int j=n-1;
int i=s-1;
while(j<n)
{
    if(n>s){
        if(v1[i]>=v[j])
        {
            v[j]=v1[i];
            j--;
            i--;
        }
    }
}
}