#include<iostream>
using namespace std;
void first (int n)
{
    int a,s;
    s=n%10;
    // cout<<s<<endl;
    
    while(n>9)
    {

        n=n/10;
    }
    cout<<s <<"   "<< n;
}
int main()
{
    int n;
    cin>>n;
    first(n);
return 0;
}



