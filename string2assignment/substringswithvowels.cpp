#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    cout<<" enter the value of string :"<<endl;
    getline(cin,s);
    int n=s.size();
    int count=0;
    int answer=0;
for(int i=0;i<n;i++)
{
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
   { count++;
   }
    else
    {
        answer= answer + (count*(count+1))/2;
           count=0;
    }
}
              answer= answer + count*(count+1)/2;
              cout<<answer;
     }
