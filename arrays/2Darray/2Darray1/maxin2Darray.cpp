#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[2][2];
    cout<<"enter the values of elements of array :"<<endl;
     for(int i=0;i<2;i++)
     {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
} 
int max=INT_MIN;
for(int i=0;i<2;i++)
     {
        for(int j=0;j<2;j++)
        {
            if(arr[i][j]>max)max=arr[i][j];

}

}
cout<<" max element is:";
cout<<max;
}