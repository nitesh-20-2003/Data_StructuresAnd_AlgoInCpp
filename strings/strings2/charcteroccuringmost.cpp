#include<iostream>
using namespace std;
int main(){
   
    string s;
   
    int max=0;// max no of timees ch occur
  
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++)
    {
       int count2=1;//kitni baar s[i] aa rah hai use store karne ke liye
        for(int j=i+1;j<n;j++)
        {
        if(s[i]==s[j])
          count2++;
        }
        if(count2>max)
        max=count2;
    } 
    for(int i=0;i<n;i++)
    {
       int count2=1;//max kitni baar ch aa rah hai
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
          count2++;
        }
        if(count2==max)
       cout<<s[i]<<" "<<count2<<endl;
    }
  
}