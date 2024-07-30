/*You have a set of integers s , which originally contains all the numbers from 1 to n .
Unfortunately, due to some error, one of the numbers in s got duplicated to another number
in the set, which results in repetition of one number and loss of another number.
You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form
of an array. [Leetcode 645]
Example 1:
Input: nums = [1,2,2,4]
Output: [2,3]
Example 2:
Input: nums = [1,1]
Output: [1,2]*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
int arr[]={1,1};
int n=sizeof(arr)/sizeof(arr[0]);
int i=0;
while (i<n)
{
    int correctidx=arr[i]-1;
    if(i==correctidx||arr[correctidx]==arr[i])i++;
    else swap(arr[i],arr[correctidx]);
}
for(int i=0;i<n;i++)
{
    if(arr[i]!=i+1)
    {
        v.push_back(arr[i]);
        v.push_back(i+1);
    }
}
for(int ele:v)
{
    cout<<ele<<" ";
}

return 0;
}