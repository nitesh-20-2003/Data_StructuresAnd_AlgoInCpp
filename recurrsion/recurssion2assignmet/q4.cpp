/*Given an array of integers, print a sum triangle using recursion from it such that the first level has
all array elements. After that, at each level the number of elements is one less than the previous
level and elements at the level will be the sum of consecutive two elements in the previous level.
So, if sample input is [5, 4, 3, 2, 1], sample output will be:
[5, 4, 3, 2, 1]
[9, 7, 5, 3]
[16, 12, 8]
[28, 20]
[48]
*/
#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n,int m,vector<int>&v)
{
    if(m==n)
  {  
      for(int i=0;i<v.size();i++)
      {
        cout<<v[i]<<" ";
      }
    return; 
    }
    v.push_back(arr[m]);
    print(arr,n,m+1,v);

}
int main()
{
int arr[]={5,4,3,2,1};
 vector<int>v;
print(arr,5,0,v);

return 0;
}