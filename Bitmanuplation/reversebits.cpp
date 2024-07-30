#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
int n=8;
int m=8;
m=m|m>>1;
m=m|m>>2;
m=m|m>>4;
m=m|m>>8;
m=m|m>>16;
m=m|m>>32;
cout<<m;
cout<<endl;
cout<<((n)^(m));

return 0;
}