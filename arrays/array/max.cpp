#include<iostream>//max among all elements of aray
using namespace std;
int main(){
    int arr[5]={ 1,0,13,5,2};
    int max=arr[0];

    for(int i=0;i<=4;i++){

if(max < arr[i])
{
    max=arr[i];
}

    }
    cout<<max;
}
