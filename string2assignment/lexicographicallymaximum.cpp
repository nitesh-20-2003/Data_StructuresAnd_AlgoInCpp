#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
#include<sstream>
int main(){
string s="decode dsa with pw";
    vector<string>v;
stringstream ss(s);
string temp;
while(ss>>temp){
    v.push_back(temp);
}
sort(v.begin(),v.end());
cout<<v[(v.size())-1];
// for(int i=0;i<v.size();i++){
//     if(v[i]!=" "){
//         cout<<v[i];
//         break;
//     }
// }
 
return 0;
    
}