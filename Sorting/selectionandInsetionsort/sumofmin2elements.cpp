#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={4,3,2,8,6,0};
    int n=6;
    for(int i=0;i<n-1;i++)
    {
    
        if(i==2)
         break;
        int min=INT_MAX;
        int mindex=-1;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                mindex=j;
            }
        }
     
    
    swap(arr[i],arr[mindex]);
    }
    for(int ele:arr){
        cout<<ele<<"  ";

    }
    cout<<endl<<endl;
    cout<<"sum of min two elements is :"<<arr[0]+arr[1];
    return 0;
}