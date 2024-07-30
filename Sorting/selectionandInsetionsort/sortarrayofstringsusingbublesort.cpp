#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string arr[]={"nitesh","sharma","son","of","rajiv","a"};
    int n=6;
  for(int i=0;i<n-1;i++) 
  {
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
  }
  for(string ele: arr)
  {
    cout<<ele<<" ";
  }
}