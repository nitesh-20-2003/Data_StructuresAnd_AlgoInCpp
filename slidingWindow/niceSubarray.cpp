/*Given an array of integers nums and an integer k . A continuous subarray is called nice if there
are k odd numbers on it.
Return the number of nice sub-arrays. [Leetcode 1248]
Example 1:
Input: nums = [1,1,2,1,1], k = 3
Output: 2
Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].
Example 2:
Input: nums = [2,4,6], k = 1
Output: 0
Explanation: There is no odd numbers in the array.
Example 3:
Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
Output: 16*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m=0;
int nums[]={2,2,2,1,2,2,1,2,2,2};
int k=2;
int n=sizeof(nums)/sizeof(nums[0]);
int i,j;
i=j=0;
int count=0, nice=0;
while(j<n)
{
     if(count==k)
    {
        nice++;
      int m=j+1;
      while((nums[m]%2==0)&&m<n)
      {
        nice++;
        m++;
      }
      i++;
      if((nums[m]%2)==0) 
      {
        nice++;
      }
      
    } 
 
      if((nums[j]%2)!=0&&count<k) count++;
          j++;
}
cout<<nice;
return 0;
}