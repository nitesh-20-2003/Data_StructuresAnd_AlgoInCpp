#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of amount :\n";
    cin>>a;
    switch(0)
    {
       case 1: b=2000/a; 
        cout<<" number of two thousand notes are :" <<b<<"\n";


         case 2: b=500/a; 
        cout<<" number of five hundred notes are :" <<b<<"\n";
       case 3: b=100/a; 
        cout<<" number of one hundred notes are :" <<b<<"\n";
       case 4: b=10/a; 
        cout<<" number of ten notes are :" <<b<<"\n";

         

        return 0;


    }

}