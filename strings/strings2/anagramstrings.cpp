#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    bool flag=false;
    string s,m;
    cout<<" enter the value of two strings :";
    cin>>s>>m;
    sort(s.begin(),s.end());
     sort(m.begin(),m.end());
     int n=s.length();
   for(int i=0;i<n;i++)
   {
    
    if(s[i]==m[i])
    flag=true;
    else
   {
     flag=false;
     break;
   }

   }
   if(flag==true)
   cout<<"yes";
   else
   cout<<" false";


}