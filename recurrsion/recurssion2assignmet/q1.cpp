#include<iostream>
using namespace std;
void print(int arr[],int n,int m)
{
    if(m==n)
    return;
  print(arr, n,m+1);
  cout<<arr[m]<<endl;

}
int main()
{
int arr[6]={2,3,7,9,6,1};
print (arr,6,0);

return 0;
}