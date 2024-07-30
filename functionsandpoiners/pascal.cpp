#include<iostream>
#include<iomanip>
using namespace std;
int combination(int d)
{
    int fact=1, i;
    for( i=1; i<=d; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
int i=0, j=0, d,n,r,q,f;
cout<<" enter the size of pascal triangle :";
cin >>q;

for ( i=0;i<=q; i++)
{
for ( j=0;j<=i; j++)
{
 n=combination(i);
  r=combination(j); 
  f=combination (i-j);
  cout<<setw(8)<<n/(r*f);
}
cout<<endl;
}
return 0;
}