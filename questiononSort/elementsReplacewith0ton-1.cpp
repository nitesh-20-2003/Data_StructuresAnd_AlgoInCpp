#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
int arr[]={19,12,23,8,16};
int n=5;
for(int ele:arr){
    cout<<ele<<" ";
}
cout<<endl;
// vector<int>v(n,0);//is visted array 
// int x=0;
// for(int i=0;i<n;i++)
// {
//     int min=INT_MAX;
//     int mindex=-1;
// for(int j=0;j<n;j++)
// {
//     if(v[j]==1)
//    { 
//     continue;
//    }
   
//     else if(arr[j]<min)
//     {
//        min=arr[j];
//         mindex=j;
//     }
    
// }
//     arr[mindex]=x;
//     v[mindex]=1;
//     x++;
// }

// for(int ele:arr)
// {
//     cout<<ele<<"  ";
// }
/*if negative elements is not preseint we can use following method:
it is useful if we given negitive no
or no upto particular limit ex 1 to 1000;
*/
int x=0;
for(int i=0;i<n;i++)
{
    int min=INT_MAX;
    int mindex=-1;
for(int j=0;j<n;j++)
{
    if(arr[j]<=0)
   { 
    continue;
   }
   
    else if(arr[j]<min)
    {
       min=arr[j];
        mindex=j;
    }
    
}
    arr[mindex]=x;
   
    x--;
}
for(int i=0;i<n;i++){
    arr[i]=-1*arr[i];
    cout<<arr[i]<<"  ";
}
}