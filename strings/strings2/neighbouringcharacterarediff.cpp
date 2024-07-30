#include<iostream>
using namespace std;
int main()
{
    int count=0;
    string s="abbcdeffghh";
    int n=s.length();
    int i=0;
    while(i<n)
    {
       if(i==0){
        if(s[i]!=s[i+1])
        count++;
        i++;
       }
       else if(i==n){
         if(s[i]!=s[i+1])
         count++;
         break;
       }
     else if(s[i]!=s[i-1]&&s[i]!=s[i+1])
        count++;
     i++;
        }
        cout<<count;
}