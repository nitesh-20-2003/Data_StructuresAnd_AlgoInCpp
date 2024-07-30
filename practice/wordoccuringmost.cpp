#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string str=" raghav  is a maths teacher.he is a dsa mentor as well";
    stringstream ss(str);
    vector<string>v;
    string temp;
    while(ss>>temp)
    v.push_back(temp);
sort(v.begin(),v.end());
int n=v.size();
int max=0;
for(int i=0;i<n;i++)
{
    int count=1;
    for(int j=i+1;j<n;j++){
        if(v[i]==v[j])
        count++;
    }
    if(count>max)
    max=count;
}
for(int i=0;i<n;i++)
{
    int count=1;
    for(int j=i+1;j<n;j++)
    {
        if(v[i]==v[j])
        count++;
    }
    if(count==max)
  cout<<" word occuring most is : "<<v[i]<<" and its frequency is : "<<max<<endl<<endl<<endl;
}
}