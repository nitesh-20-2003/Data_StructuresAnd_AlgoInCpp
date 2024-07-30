/*The score of an array is defined as the product of its sum and its length.
For example, the score of [1, 2, 3, 4, 5] is (1 + 2 + 3 + 4 + 5) * 5 = 75 .
Given a positive integer array nums and an integer k , return the number of non-empty
subarrays of nums whose score is strictly less than k . [Leetcode 2302]
A subarray is a contiguous sequence of elements within an array.
Example 1:
Input: nums = [2,1,4,3,5], k = 10
Output: 6
Explanation:
The 6 subarrays having scores less than 10 are:
[2] with score 2 * 1 = 2.
[1] with score 1 * 1 = 1.
[4] with score 4 * 1 = 4.
[3] with score 3 * 1 = 3.
[5] with score 5 * 1 = 5.
[2,1] with score (2 + 1) * 2 = 6.*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
int nums[]={1,1,1};
int n=sizeof(nums)/sizeof(nums[0]);
int k=5;
int i=0,j=0;
int len=0,sum=0;
int count=0;
while(j<n)
{
    sum+=nums[j];
    len++;
    if((sum*len)<k)j++;
    else
    {
        while((sum*len)>=k)
        {
            count+=j-i;
            sum-=nums[i];
            len--;
            i++;
        }
        j++;
    }
}
while(i<n)
{
     count+=j-i;
     sum-=nums[i];
     len--;
     i++;
}
cout<<count;
return 0;
}