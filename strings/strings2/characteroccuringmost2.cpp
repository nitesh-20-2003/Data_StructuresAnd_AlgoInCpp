#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int max=0;
    int ascii;
string s="mynameisniteshsharma";
vector<int>v(26);
for(int i=0;i<26;i++)
{
    char ch=s[i];
int ascii =(int)ch;
  v[ascii-97]++;
}
for(int i=0;i<26;i++)
{
   if(v[i]>max)
   max=v[i];
    
}
for(int i=0;i<26;i++)
{
   if(v[i]==max)
{
    int ascii=i+97;
char ch =(char)ascii;

 cout<<" character occuring most is :"<<ch<<endl<<" and its frequency is :"<<max<<endl;
 }
  }

    
}

