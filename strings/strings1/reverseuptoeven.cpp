#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  string s="nitesh";
  reverse(s.begin()+0,s.begin()+(s.size()/2));
  cout<<s;

}