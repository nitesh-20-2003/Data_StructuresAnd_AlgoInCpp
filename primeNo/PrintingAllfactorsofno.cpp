#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
int n=60;

for(int i=1;i<sqrt(n);i++)
{
     if(n%i==0)cout<<i<<" ";
}
cout<<" ";
for(int i = sqrt(n); i >= 1; i--)
{
    if(n % i == 0) cout << n / i << " ";
}
return 0;
}