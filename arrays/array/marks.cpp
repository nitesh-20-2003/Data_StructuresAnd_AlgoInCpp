#include<iostream>// marks of students less than 35 

using namespace std;
int main(){
    int a[10];
    for (int i=0;i<=9;i++){
        cin>>a[i];
    }
        for (int i=0;i<=9;i++){
            if(a[i]<35)
            {
        cout<<i<< "   ";
        }

    }
}