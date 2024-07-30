/*
You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target , return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity.
Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
*/
#include<iostream>
using namespace std;
int main()
{
    bool flag=false;
    int a[][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=13;
    int lo=0;
    int hi=3;
    int ro=-1;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(a[mid][0]>target)
          hi=mid-1;
         else if(a[mid][0]<target)
         {
           if(a[mid+1][0]>target)
        {  
            ro=mid;
          break;
          }
          else
          lo=mid+1;
         }
    }
     lo=0;
     hi=3;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(a[ro][mid]==target)
        {
            flag=true;
            cout<<true;
            break;
        }
        else if(a[ro][mid]<target)
        lo=mid+1;
        else 
        hi=mid-1;
    }
    if(flag==false)
    cout<<false;

}