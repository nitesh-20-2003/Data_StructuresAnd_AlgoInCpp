#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int arr[2][4]={{56 ,57 ,59,60},{100,200,300,400}};
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<setw(4)<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}