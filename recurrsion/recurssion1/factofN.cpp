#include<iostream>
using namespace std;
int fact(int n )
{
    if(n==0)
    return 1;
    int m;
    m=n*fact(n-1);
    return m;
}
int main()
{
    int n;
    cin>>n;
     int s= fact(n);
    cout<<"factorial of given no is :"<<s;
}