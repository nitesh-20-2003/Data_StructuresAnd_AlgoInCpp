#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string str=" My name is lakhan sajno ka sajan mera nam hai lakhan";
    stringstream ss(str);
        string temp;
        while(ss>>temp)
        {
            cout<<temp<<endl;
        }
        cout<<temp.size();

}