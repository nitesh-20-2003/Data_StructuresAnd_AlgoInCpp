#include<iostream>
using namespace std;
void bs(string s,int size)
{
    if(s.size()==size)
    {
        cout<<s<<endl;
        return;
    }
    bs(s+'0',size);
   if(s==""||s[s.size()-1]=='0')
     bs(s+'1',size);

}
int main()
{
    int n=2;
bs("",n);
return 0;
}