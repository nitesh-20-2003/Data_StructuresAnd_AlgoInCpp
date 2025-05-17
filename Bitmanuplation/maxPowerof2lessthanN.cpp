#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
int n=90;
int temp=0;
while(n>0)
{
    temp=n;
    n=n&(n-1);
}
cout<<temp;
return 0;
}63.