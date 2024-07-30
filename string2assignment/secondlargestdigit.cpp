#include<iostream>
//Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
#include<vector>
#include<sstream>
#include<climits>
using namespace std;
int main(){
string s="123456798";
vector<string>v(9);
for(int i=0;i<9;i++)
{
    v[i]=s[i];
}
// vector<int>v1(9);
// for(int i=0;i<9;i++)
// {
//     v1[i]=stoi(v[i]);
// }
// int max1=INT_MIN;
// int max2=INT_MIN;
// for(int i=0;i<9;i++)
// {
//     if(v1[i]>max1)
//     {
//         max2=max1;
//         max1=v1[i];
//     }
// if(v1[i]>=max2&&v1[i]!=max1)
// max2=v1[i];
// }
// cout<<"smax is :"<<max2;
int max,max2;
max=max2=INT_MIN;
 
for(int i=0;i<v.size();i++)
{
int x=stoi(v[i]);
if(x>max)
{
    max2=max;
    max=x;
}
if((x>=max2)&&(x!=max))
max2=x;
}
cout<<"smax is :"<<max2;
}