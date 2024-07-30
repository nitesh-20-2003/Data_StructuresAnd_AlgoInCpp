/*Given an integer array nums of length n where all the integers of nums are in the range [1,
n] and each integer appears once or twice, return an array of all the integers that appears
twice.
You must write an algorithm that runs in O(n) time and uses only constant extra space.

[Leetcode 442]

Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:
Input: nums = [1,1,2]
Output: [1]*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
int nums[]={4,3,2,7,8,2,3,1};
int n=sizeof(nums)/sizeof(nums[0]);
vector<int>v;
int i=0;
while(i<n)
{
    int correctidx=nums[i]-1;
    if(i==correctidx||nums[correctidx]==nums[i])i++;
    else swap(nums[i],nums[correctidx]);
}
for(int i=0;i<n;i++)
{
    if(nums[i]!=i+1)
    v.push_back(nums[i]);
}
for(int ele:v)
{
    cout<<ele<<" ";
}
return 0;
}