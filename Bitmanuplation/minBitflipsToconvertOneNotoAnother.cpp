#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
int n=5;//given no
int m=11;//no to which n is converted;
int x=n^m;//now count no of set bits in x;
int count=0;
while(x>0)
{
    count++;
    x=x&(x-1);
}
cout<<"min no of bit flips required to convert one no to another is:    "<<count;
return 0;
}