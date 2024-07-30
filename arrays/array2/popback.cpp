#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
    a.push_back(2);
    a.push_back(4);
    a.push_back(3);
    a.push_back(5);
    a.push_back(8);
    a.push_back(0);
    a.push_back(8);
    a.push_back(7);
    a.push_back(6);
    for(int i=0;i<=a.size();i++){
cout<<a[i]<<"  ";

    }
     cout<<endl;
     cout<<"size is :"<<a.size()<<endl;
    cout<<"capacity is:  " <<a.capacity()<<endl;
    cout<<endl;
    a.pop_back();
     a.pop_back(); 
        cout<<"size is now :"<<a.size()<<endl;// size changes;
     cout<<"capacity is now :" <<a.capacity()<<endl;//capacity remain same;
       for(int i=0;i<=a.size();i++)
       {
cout<<a[i]<<"  ";
    }

}