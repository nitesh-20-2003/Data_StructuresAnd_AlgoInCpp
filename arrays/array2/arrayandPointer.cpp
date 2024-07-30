#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,0,9};
    int *ptr=arr;
    cout<<ptr<<"  "<<*ptr<<endl;
    for(int i=0;i<=5;i++){
        cout<<ptr[i]<<endl;
    }
      for(int i=0;i<=5;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
}
