#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a=INT_MIN;
    int num=0;
    int arr[]={1,2,3,4,5,6,1,2};
    for(int i=0;i<=7;i++)
    {
        if(arr[i]>a){
            num++;
        }
    }
    cout<<num++;
}