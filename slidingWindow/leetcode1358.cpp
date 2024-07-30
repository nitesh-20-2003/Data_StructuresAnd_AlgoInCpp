#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string s="abcabc";
    int i=0;
        int j=0;
        int count=0;
        int ans=0,idx=0;
        while(j<s.length())
        {
            if(s[j]=='a'||s[j]=='b'||s[j]=='c')
           { 
            count=0;
            idx++;
             
           }
           else
           {
                while(idx>=3)
                {
                  count++;
                 if(s[j-1]=='a'||s[j-1]=='b'||s[j-1]=='c')idx--;
                      j--;
                }
                    i++;
           }
           j++;
           ans+=count;
        }
        cout<<ans;
return 0;
}