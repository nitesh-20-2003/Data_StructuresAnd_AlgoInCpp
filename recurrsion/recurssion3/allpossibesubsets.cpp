#include<iostream>
using namespace std;
void subst(string ans,string orignal,int x)
{
    if(x==orignal.length())
    {
        cout<<ans<<endl;
    return;
    }
    char ch=orignal[x];
    subst(ans+ch,orignal,x+1);
    subst(ans,orignal,x+1);
}
int main()
{
subst("","ab",0);
return 0;
}