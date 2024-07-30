#include<iostream>
using namespace std;
int combination(int d)
{
    int fact=1, i;
    for( i=0; i<=d; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
int i=0, j=0, d,n,r,ncr ,f;
for ( i=0;i<=5; i++)
{
for ( j=0;j<=i; j++)
{
 n=combination(i);
  r=combination(j); 
  f=combination (i-j);
  cout<<n/(r*f);
}
cout<<endl;
}

}