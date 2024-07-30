#include<iostream>
using namespace std;
int print(int n)
{
    if(n==0)
    return 0;
  int  ans=n+print(n-1);
    return ans;
}
int main()
{
    int n;
    cin>>n;
  cout<< print(n);
}