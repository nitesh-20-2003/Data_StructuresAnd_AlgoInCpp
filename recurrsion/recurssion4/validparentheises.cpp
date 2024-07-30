#include<iostream>
#include<string>
using namespace std;
void valid(string ans,int o,int c,int n)
{
    if(c==n)
    {
        cout<<ans<<endl;
        return;
    }
   
     if(o<n)valid(ans+"(",o+1,c,n);
        if(o>c)valid(ans+")",o,c+1,n);

}

int main()
{
int n=2;
int o,c;
o=c=0;
valid("",o,c,n);
return 0;
}