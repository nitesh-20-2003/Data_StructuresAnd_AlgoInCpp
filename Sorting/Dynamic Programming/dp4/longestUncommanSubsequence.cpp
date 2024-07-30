#include<iostream>
#include<string>
using namespace std;
int f1(string s1,string s2,int i,int j)
{
    if(i==s1.size())return 0;
    if(i==s2.size())return 0;
    if(s1[i]==s2[j])
    return f1(s1,s2,i+1,j);
    else{
        return max(1+f1(s1,s2,i+1,j),1+f1(s1,s2,i,j+1));
    }
}
int main()
{
string s1="babab";
string s2="babba";
cout<<f1(s1,s2,0,0);

return 0;
}