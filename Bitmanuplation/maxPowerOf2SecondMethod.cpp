#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
int n=24;
n=n|n>>1;
n=n|n>>2;
n=n|n>>4;
n=n|n>>8;
n=n|n>>16;
// now this give max of no 31 ie 2^5-1 adding 1 in it and dividing by 2 give ans;
 n=(n+1)>>1;
cout<<n;
return 0;
}