#include<bits/stdc++.h>
using namespace std;
int ans(int z){
    int result=0;
    while(z>0){
        z=(z&(z-1));
        result++;
    }
    return result;
}
int main()
{
int x,y;
cin>>x>>y;
int z=x^y;
cout<<z<<endl;
cout<<endl;
cout<<ans(z)<<endl;
return 0;
}