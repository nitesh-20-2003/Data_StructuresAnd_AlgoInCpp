#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    string s="physicswallah";
   string m=s.substr(0);
   reverse(m.begin(),m.end());
cout<<"string cat is :"<<endl;
   s=s + m;
   cout<<s;
 
} 