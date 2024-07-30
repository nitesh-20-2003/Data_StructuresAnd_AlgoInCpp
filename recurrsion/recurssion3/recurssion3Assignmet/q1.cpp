//Write a recursive function to reverse a number. Avoid preceding 0s in the reversed number.
#include<iostream>
#include<vector>
using namespace std;
void reverse(int x,vector<int>&v,int idx)
{
    if(x==0)
    return ;
    reverse(x/10,v,idx)
}
int main()
{
int x=1230234;
vector<int>v;
reverse(x,v,0);
return 0;
}