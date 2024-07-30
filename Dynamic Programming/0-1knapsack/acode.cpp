#include<bits/stdc++.h>
using namespace std;
string decode(string &input){
    string res="";
    if(input.size()==1){
        res+(char)(64+input[0]-'0');
    }
    else{
        int num= (input[0]-'0')*10+(input[1]-'0');
        res+=(char)(64+num);
    }
    return res;
}
int main()
{

return 0;
}